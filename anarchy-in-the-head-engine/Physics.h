#ifndef PHYSICS_H
#define PHYSICS_H

class Position { // Класс позиции
protected: // Наследуемые поля
	int x; // Позиция по оси X
	int y; // Позиция по оси Y
public: // Публичные поля
	// Конструкторы
	Position(); // Конструктор по умолчанию
	Position(int _x, int _y); // Основной конструктор

	// Функции
	int getX(); // Вернуть позицию по оси X
	int getY(); // Вернуть позицию по оси Y

	// Методы
	void transform(int _x = 0, int _y = 0); // Переместить на указанную величину
	void transformTo(int _x = 0, int _y = 0); // Переместить на новую позицию
};

class Point : public Position { // Класс точки
public: // Публичные поля
	Point(); // Конструктор по умолчанию
	Point(int _x, int _y); // Основной конструктор
};

#endif