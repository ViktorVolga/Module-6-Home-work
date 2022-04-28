#pragma once
#include "Appliances.h"

class Refrigerators : virtual public Appliances //наследуем от техники
{
protected:
	int _power_usage; //вводим новую переменную
public:
	Refrigerators(string _name, double _price, int _power_usage); // конструктор
	Refrigerators(int _powerusage); // конструктор для наследования в лаптопе
	void showinfo(); //перегрузили функцию
	int get_power_usage(); //функция для получения приватного значения
	
};
	