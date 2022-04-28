#include "Laptop.h"

Laptop::Laptop(string _name, double _price, int _baterylife, int _power_usage ) : Device(_name, _price, _baterylife), Refrigerators(_power_usage)
{
	this->_name = _name; //перегружаем. От класса Aplience защищена иначе переменная
	this->_price = _price; //перегружаем. От класса Aplience защищена иначе переменная
}
void Laptop::showinfo() //перегружаю функцию вывода
{
	Device::showinfo(); //из девайс вызываем функцию
	cout << "Power usage: " << _power_usage << endl << endl; // перегружаем нужной строчкой
}