#include <string> // Интегрирование библиотеки строк
using namespace std; // Подключения пространства имён

#include "Item.h" // Подключения инциализатора

extern Item ItemList[6] = { // Список предметов
	Item(1, "Apple"),
	Item(2, "Bread"),
	Item(3, "Cinnamon"),
	Item(4, "Death"),
	Item(5, "Emerald"),
	Item(6, "Fire"),
};

// Реализация класса предмета

// Конструкторы
Item::Item() { // Конструктор по умолчанию
	id = 0; // Обнуление идентификатора
	name = ""; // Обнуление имени
};
Item::Item(int _id) { // Конструктор с указание идентификатора
	id = _id; // Указание идентификатора
	name = ""; // Обнуление имени
};
Item::Item(int _id, string _name) { // Полный конструктор
	id = _id; // Указание идентификатора
	name = _name; // Указание имени
};

// Функции
int Item::getId() { return id; }; // Вернуть идентификатор
string Item::getName() { return name; }; // Вернуть имя