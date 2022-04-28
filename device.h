#pragma once
#include "Appliances.h"

class Device : virtual public Appliances //унаследовали класс от техники
{
	int _batеrylife; //новая переменная
public:
	Device(string _name, double _price, int _baterylife); //конструктор 
	virtual void showinfo(); //функция вывода инструкции
};