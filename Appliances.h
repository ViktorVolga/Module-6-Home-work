#pragma once
#include <iostream>

using namespace std;

class Appliances //Базовый класс
{
protected:
	string _name;
	double _price;
	
public:
	Appliances() = default; //конструктор по умолчанию
	Appliances(string _name, double _price); //конструктор с параметрами
	virtual ~Appliances() = default; // деструктор по умолчанию
	virtual void showinfo(); // функция вывода
	
};