#pragma once
#include "Appliances.h"

class Device : virtual public Appliances //������������ ����� �� �������
{
	int _bat�rylife; //����� ����������
public:
	Device(string _name, double _price, int _baterylife); //����������� 
	virtual void showinfo(); //������� ������ ����������
};