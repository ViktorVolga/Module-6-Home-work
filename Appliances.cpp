#include <iostream>
#include "Appliances.h"

Appliances::Appliances(string _name, double _price) //�����������
{
	this->_name = _name; //������ ���
	this->_price = _price; //������ ����
}

void Appliances::showinfo() //������� ������ ����
{
	cout << endl; // � ����� ������� ��� ������� ������
	cout << "name: " << _name << endl; 
	cout << "price: " << _price << endl;
}
