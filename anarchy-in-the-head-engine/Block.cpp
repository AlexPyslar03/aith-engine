#include "Block.h"

extern Block XY[BLOCKS_COUNT_Y][BLOCKS_COUNT_X]; // Структура мира

extern Block BlockList[4] = { // Список блоков
	Block(0, 0, ' ', false),
	Block(1, 33, '#', true),
	Block(2, 34, '+', false),
	Block(3, 31, '+', false)
};

// Реализация класса блока

// Конструкторы
Block::Block() { // Конструктор по умолчанию
	id = 0; // Обнуление идентификатора
	color = 0; // Обнуление цвета
	symbol = ' '; // Обнуление символа отображения
	collision = false; // Обнуление коллиниарности
}
Block::Block(int _id) { // Конструктор с указание идентификатора
	id = _id; // Указание идентификатора
	color = 0; // Обнуление цвета
	symbol = ' '; // Обнуление символа отображения
	collision = false; // Обнуление коллиниарности
}
Block::Block(int _id, int _color, char _symbol, bool _collision) { // Полный конструктор
	id = _id; // Указание идентификатора
	color = _color; // Указание цвета
	symbol = _symbol; // Указание символа отображения
	collision = _collision; // Указание коллиниарности
};

// Функции
int Block::getId() { return id; }; // Вернуть идентификатор
int Block::getColor() { return color; }; // Вернуть значение цвета
char Block::getSymbol() { return symbol; }; // Вернуть значение здоровья
bool Block::getCollision() { return collision; }; // Вернуть коллизию