#include "Physics.h"

Point::Point() {}
Point::Point(int x, int y) {
	_x = x;
	_y = y;
}

Position::Position() {}
Position::Position(int x, int y) {
	_x = x;
	_y = y;
}
void Position::transform(int x, int y) {
	_x = x;
	_y = y;
}