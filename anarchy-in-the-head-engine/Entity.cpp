#include "Entity.h"
#include "Physics.h" // Интегрирование класса физики

extern Entity entitys[ENTITIES_COUNT]; // Структура сущностей
extern Entity EntityList[2] = { // Список существ
	Entity(0, 35, 1, 'O'),
	Entity(1, 36, 1, 'R')
};

// Реализация класса сущности

// Конструкторы
Entity::Entity() : Position() { // Конструктор по умолчанию
	id = 0; // Обнуление идентификатора
	color = 0; // Обнуление цвета
	hp = 0; // Обнуление здоровья
	symbol = ' '; // Обнуление символа отображения
};
Entity::Entity(int _id) : Position() { // Конструктор с указание идентификатора
	id = _id; // Указание идентификатора
	color = 0; // Обнуление цвета
	hp = 0; // Обнуление здоровья
	symbol = ' '; // Обнуление символа отображения
};
Entity::Entity(int _id, int _color, int _hp, char _symbol) : Position() { // Конструктор без координат
	id = _id; // Указание идентификатора
	color = _color; // Указание цвета
	hp = _hp; // Указание здоровья
	symbol = _symbol; // Указание символа отображения
};
Entity::Entity(int _id, int _color, int _hp, char _symbol, int _x, int _y) : Position(_x, _y) { // Конструктор с координатами
	id = _id; // Указание идентификатора
	color = _color; // Указание цвета
	hp = _hp; // Указание здоровья
	symbol = _symbol; // Указание символа отображения
};

// Функции
int Entity::getId() { return id; }; // Вернуть идентификатор
int Entity::getColor() { return color; }; // Вернуть значение цвета
int Entity::getHp() { return hp; }; // Вернуть значение здоровья
char Entity::getSymbol() { return symbol; }; // Вернуть символ отображения
int Entity::getMaxItems() { return maxItems; }; // Вернуть масимальное количество предметов