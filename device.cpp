#include "device.h"
#include <iostream>


Device::Device(string _name, double _price, int _baterylife) : Appliances(_name, _price) //������������� �����������
{
	this->_bat�rylife = _baterylife; //����� ����� ����������
}

void Device::showinfo() // ��������� ������� ������
{
	Appliances::showinfo();
	cout << "Battery life: " << _bat�rylife << endl;
}