#include <iostream>
#include "Physics.h"
#include "Block.h"
#include "Entity.h"

using namespace std;

static Entity player = Entity(0, 32, 100, '%', Point(10, 20));

/*static Block BlockList[4] = {
	Block(0, 0, ' ', false),
	Block(1, 33, '#', true),
	Block(2, 34, '+', false),
	Block(3, 31, '+', false)
};*/

static Block XY[20][40];

static Entity EntityList[2] = {
	Entity(0, 35, 1, 'O'),
	Entity(1, 36, 1, 'R')
};

static Entity entitys[10];

int main() {

	srand(time(NULL));

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 40; j++) {
			int ran = rand() % 100;
			if (ran < 5) {
				XY[i][j] = BlockList[1];
			}
			if ((ran >= 5) && (ran < 10)) {
				XY[i][j] = BlockList[2];
			}
			if ((ran >= 10) && (ran < 15)) {
				XY[i][j] = BlockList[3];
			}
			if (ran >= 15) {
				XY[i][j] = BlockList[0];
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		int ran = rand() % 100;
		if (ran < 75) {
			entitys[i] = EntityList[0];
		}
		if ((ran >= 75) && (ran < 100)) {
			entitys[i] = EntityList[1];
		}
	}
	for (int i = 0; i < 10; i++) {
		entitys[i].position = Point(rand() % 20, rand() % 40);
	}
	while (1) {
		cout << "\x1B[2J\x1B[H";
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 40; j++) {
				if ((i == 0) || (j == 0) || (i == 19) || (j == 39)) {
					cout << '#';
					if (j == 39) {
						cout << endl;
					}
				}
				else {
					bool f = false;
					if ((player.position.x == i) && (player.position.y == j)) {
						cout << "\x1b[" << player.color << "m" << player.symbol << "\x1b[0m";
						f = true;
					}
					for (int k = 0; k < 10; k++) {
						if ((entitys[k].position.x == i) && (entitys[k].position.y == j)){
							cout << "\x1b[" << entitys[k].color << "m" << entitys[k].symbol << "\x1b[0m";
							f = true;
						}
					}
					if (f == false) {
						cout << "\x1b[" << XY[i][j].color << "m" << XY[i][j].symbol << "\x1b[0m";
					}
				}
			}
		}
		cout << "HP: " << player.hp << endl;
		char cmd;
		//cin >> cmd;
		cmd = getchar();
		if (cmd == 'w') {
			if (XY[player.position.x - 1][player.position.y].collision == false) {
				player.position.x--;
			}
		}
		if (cmd == 's') {
			if (XY[player.position.x + 1][player.position.y].collision == false) {
				player.position.x++;
			}
		}
		if (cmd == 'a') {
			if (XY[player.position.x][player.position.y - 1].collision == false) {
				player.position.y--;
			}
		}
		if (cmd == 'd') {
			if (XY[player.position.x][player.position.y + 1].collision == false) {
				player.position.y++;
			}
		}
		if (cmd == 'q') {
			exit(0);
		}
		/*if (cmd == '`') {
			cout << "AITH:\\Admin> ";
			string cheat;
			cin >> cheat;
		}*/
		if (XY[player.position.x][player.position.y].id == 2) {
			player.hp -= 10;
			XY[player.position.x][player.position.y] = Block(0, 0, ' ', false);
		}
		if (XY[player.position.x][player.position.y].id == 3) {
			player.hp += 10;
			XY[player.position.x][player.position.y] = Block(0, 0, ' ', false);
		}
		if (player.hp == 0) {
			cout << "\x1B[2J\x1B[H" << "Game Over" << endl;
			exit(0);
		}
	}
	return 0;
}
