#ifndef BLOCK_H
#define BLOCK_H

#include "Physics.h"

class Block {
private:
	int _id;
	Position _position;
public:
	int _color;
	char _symbol;
	bool _collision;

	Block(int id = 0, Position position);
	Block(int id = 0, Position position, int color, char symbol, bool collision);

	int getId();
	Position getPosition();
};

#endif
