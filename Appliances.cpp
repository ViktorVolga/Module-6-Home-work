#include <iostream>
#include "Appliances.h"

Appliances::Appliances(string _name, double _price) //конструктор
{
	this->_name = _name; //вводим имя
	this->_price = _price; //вводим цену
}

void Appliances::showinfo() //функция вывода инфы
{
	cout << endl; // с новой строчки для красоты вывода
	cout << "name: " << _name << endl; 
	cout << "price: " << _price << endl;
}
