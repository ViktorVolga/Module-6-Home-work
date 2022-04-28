#include "Laptop.h"

Laptop::Laptop(string _name, double _price, int _baterylife, int _power_usage ) : Device(_name, _price, _baterylife), Refrigerators(_power_usage)
{
	this->_name = _name; //�����������. �� ������ Aplience �������� ����� ����������
	this->_price = _price; //�����������. �� ������ Aplience �������� ����� ����������
}
void Laptop::showinfo() //���������� ������� ������
{
	Device::showinfo(); //�� ������ �������� �������
	cout << "Power usage: " << _power_usage << endl << endl; // ����������� ������ ��������
}