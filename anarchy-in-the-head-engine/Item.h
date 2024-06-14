#ifndef ITEM_H
#define ITEM_H

#include <string> // Интегрирование библиотеки строк

using namespace std;

class Item { // Класс предмета
private: // Приватные поля
	int id; // Идентификатор
public: // Публичные поля
	string name; // Имя
	// Конструкторы
	Item();
	Item(int _id);
	Item(int _id, string _name);

	// Функции
	int getId(); // Вернуть идентификатор
	string getName(); // Вернуть имя
};

#endif