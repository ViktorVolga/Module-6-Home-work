#pragma once
#include "Appliances.h"

class Refrigerators : virtual public Appliances //��������� �� �������
{
protected:
	int _power_usage; //������ ����� ����������
public:
	Refrigerators(string _name, double _price, int _power_usage); // �����������
	Refrigerators(int _powerusage); // ����������� ��� ������������ � �������
	void showinfo(); //����������� �������
	int get_power_usage(); //������� ��� ��������� ���������� ��������
	
};
	