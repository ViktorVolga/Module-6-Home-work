#pragma once
#include <iostream>

using namespace std;

class Appliances //������� �����
{
protected:
	string _name;
	double _price;
	
public:
	Appliances() = default; //����������� �� ���������
	Appliances(string _name, double _price); //����������� � �����������
	virtual ~Appliances() = default; // ���������� �� ���������
	virtual void showinfo(); // ������� ������
	
};