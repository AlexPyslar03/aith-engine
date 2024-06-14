#include <iostream>
#include <ctime>
#include "Physics.h" // Интегрирование класса физики
#include "Block.h" // Интегрирование класса блока
#include "Entity.h" // Интегрирование класса сущности
#include "Player.h" // Интегрирование класса игрока

using namespace std; // Подключения пространства имён

Player player = Player(0, 32, 100, '%', 10, 20, 6); // Главный игрок

extern Item ItemList[6]; // Список предметов
Block XY[BLOCKS_COUNT_Y][BLOCKS_COUNT_X]; // Структура мира
extern Block BlockList[4]; // Список блоков
Entity entitys[ENTITIES_COUNT]; // Структура сущностей
extern Entity EntityList[2]; // Список существ

int main() {
	srand(time(NULL));
	for (int i = 0; i < BLOCKS_COUNT_Y; i++) {
		for (int j = 0; j < BLOCKS_COUNT_X; j++) {
			int ranXY = rand() % 100;
			if (ranXY < 5) {
				XY[i][j] = BlockList[1];
			}
			if ((ranXY >= 5) && (ranXY < 10)) {
				XY[i][j] = BlockList[2];
			}
			if ((ranXY >= 10) && (ranXY < 15)) {
				XY[i][j] = BlockList[3];
			}
			if (ranXY >= 15) {
				XY[i][j] = BlockList[0];
			}
		}
		int ranEntitys = rand() % 100;
		if (ranEntitys < 75) {
			entitys[i] = EntityList[0];
		}
		if ((ranEntitys >= 75) && (ranEntitys < 100)) {
			entitys[i] = EntityList[1];
		}
		entitys[i].transformTo(rand() % 20, rand() % 40);
	}
	while (1) {
		cout << "\x1B[2J\x1B[H";
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 40; j++)
				if ((i == 0) || (j == 0) || (i == 19) || (j == 39)) {
					cout << '#';
					if (j == 39) cout << endl;
				}
				else {
					bool f = false;
					if ((player.getX() == i) && (player.getY() == j)) {
						cout << player.getSymbol();
						f = true;
					}
					for (int k = 0; k < 10; k++)
						if ((entitys[k].getX() == i) && (entitys[k].getY() == j)) {
							cout << entitys[k].getSymbol();
							f = true;
						}
					if (f == false) cout << XY[i][j].getSymbol();
				}
		}
		cout << "HP: " << player.getHp() << endl;
		for (int i = 0; i < player.getMaxItems(); i++)
			cout << player.inventory[i].getName() << endl;
		player.Controls();
	}
}
