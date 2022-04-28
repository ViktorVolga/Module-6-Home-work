#include "refrigerators.h"


Refrigerators::Refrigerators(string _name, double _price, int _power_usage) : Appliances(_name, _price)  //����������� ��� �������������
{
	this->_power_usage = _power_usage; //���� ����� ����������
}

Refrigerators::Refrigerators(int _power_usage) //����������� ��� ������������ � �������
{
	this->_power_usage = _power_usage;
}

void Refrigerators::showinfo()  //����������� � ����� ����������
{
	Appliances::showinfo();
	cout << "Power usage: " << _power_usage << endl;
}

int Refrigerators::get_power_usage() //������ ��� ��������� ���� � �������
{
	return _power_usage;
}