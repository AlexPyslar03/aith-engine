#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h" // Интегрирование класса сущности

class Player : public Entity { // Класс игрока
public: // Публичные поля
	Player(int _id, int _color, int _hp, char _symbol, int _maxItems); // Конструктор без координат
	Player(int _id, int _color, int _hp, char _symbol, int _x, int _y, int _maxItems); // Конструктор с координатами

	// Методы
	void Controls(); // Управление игроком
};

#endif