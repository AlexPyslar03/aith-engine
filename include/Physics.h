#ifndef PHYSICS_H
#define PHYSICS_H

class Point {
public: 
	int _x;
	int _y;

	Point();
	Point(int x, int y);
};

class Position {
private:
	int _x;
	int _y;

public:
	Position();
	Position(int x, int y);

	void transform(int x = 0, int y = 0);
};

#endif