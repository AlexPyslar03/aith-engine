#ifndef BLOCK_H
#define BLOCK_H

#define BLOCKS_COUNT_X 40 // Количество блоков по оси X
#define BLOCKS_COUNT_Y 20 // Количество блоков по оси Y

class Block{ // Класс блока
private: // Приватные поля
	int id; // Идентификатор
	int color; // Цвет
	char symbol; // Здоровье
	bool collision; // Коллизия
public: // Публичные поля
	// Конструкторы
	Block(); // Конструктор по умолчанию
	Block(int _id); // Конструктор с указание идентификатора
	Block(int _id, int _color, char _symbol, bool _collision); // Полный конструктор
	
	// Функции
	int getId(); // Вернуть идентификатор
	int getColor(); // Вернуть значение цвета
	char getSymbol(); // Вернуть значение здоровья
	bool getCollision(); // Вернуть коллизию
};

#endif
