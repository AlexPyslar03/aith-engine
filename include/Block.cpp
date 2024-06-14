#include "Block.h"
#include "Physics.h"

Block::Block(int id, Position position) {
	_id = id;
	_position = position;
};

Block::Block(int id = 0, Position position = new Position(), int color, char symbol, bool collision) {
	_id = id;
	_position = position;
	_color = color;
	_symbol = symbol;
	_collision = collision;
};

Entity::getId() {
	return _id;
}

Entity::getPosition() {
	return _position;
}