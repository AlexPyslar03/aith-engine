#ifndef ENTITY_H
#define ENTITY_H

#define ENTITIES_COUNT 20 // Количество сущностей

#include "Physics.h" // Интегрирование класса физики
#include "Item.h" // Интегрирование класса предмета

class Entity : public Position { // Класс сущности
protected: // Наследуемые поля
	int id; // Идентификатор
	int color; // Цвет
	int hp; // Здоровье
	char symbol; // Символ отображения
	int maxItems; // Максимальное количество предметов
public: // Публичные поля
	// Переменные
	Item* inventory; // Инвентарь

	// Конструкторы
	Entity(); // Конструктор по умолчанию
	Entity(int _id); // Конструктор с указание идентификатора
	Entity(int _id, int _color, int _hp, char _symbol); // Конструктор без координат
	Entity(int _id, int _color, int _hp, char _symbol, int _x, int _y); // Конструктор с координатами

	// Функции
	int getId(); // Вернуть идентификатор
	int getColor(); // Вернуть значение цвета
	int getHp(); // Вернуть значение здоровья
	char getSymbol(); // Вернуть символ отображения
	int getMaxItems(); // Вернуть масимальное количество предметов

	// Методы
	void setHp(int _hp) { hp = _hp; }; // Установить значение здоровья
	void addItem(Item _item) { // Добавить предмет
		for (int i = 0; i < maxItems; i++) // Проход по инвентарю
			if (inventory[i].getId() == 0) { // Если найден пустой слот
				inventory[i] = _item; // Вставить в пустой слот предмет
				break; // Выход из цикла
			}
	};
	void deleteItem(int i) { inventory[i] = NULL; }; // Удалить предмет
};

#endif