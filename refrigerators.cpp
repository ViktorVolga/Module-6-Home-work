#include "refrigerators.h"


Refrigerators::Refrigerators(string _name, double _price, int _power_usage) : Appliances(_name, _price)  //конструктор для холодильников
{
	this->_power_usage = _power_usage; //ввел новую переменную
}

Refrigerators::Refrigerators(int _power_usage) //Конструктор для наследования в лаптопе
{
	this->_power_usage = _power_usage;
}

void Refrigerators::showinfo()  //перегрузили с новой переменной
{
	Appliances::showinfo();
	cout << "Power usage: " << _power_usage << endl;
}

int Refrigerators::get_power_usage() //геттер для получения инфы в лаптопе
{
	return _power_usage;
}