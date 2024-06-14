#include "Entity.h"
#include "Physics.h"

Entity::Entity(int id) {
	_id = id;
};

Entity::Entity(int id, int color, int hp, char symbol) {
	_id = id;
	_color = color;
	_hp = hp;
	_symbol = symbol;
};

Entity::Entity(int id, int color, int hp, char symbol, Position newPosition) {
	_id = id;
	_color = color;
	_hp = hp;
	_symbol = symbol;
	_position = newPosition;
};

int Entity::getId() {
	return _id;
}
