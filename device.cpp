#include "device.h"
#include <iostream>


Device::Device(string _name, double _price, int _baterylife) : Appliances(_name, _price) //перезагрузили конструктор
{
	this->_batеrylife = _baterylife; //ввели новую переменную
}

void Device::showinfo() // дополнили функцию вывода
{
	Appliances::showinfo();
	cout << "Battery life: " << _batеrylife << endl;
}