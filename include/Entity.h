#ifndef ENTITY_H
#define ENTITY_H

#include "Physics.h"

class Entity {
private:
	int _id;
public:
	int _color;
	int _hp;
	char _symbol;
	Position _position;

	Entity(int id = 0);
	Entity(int id, int color, int hp, char symbol);
	Entity(int id, int color, int hp, char symbol, Position newPosition);

	int getId();
};

#endif
