#pragma once
#include "device.h"
#include "refrigerators.h"
#include "Appliances.h"

class Laptop final : public Device, Refrigerators //��������� �� ���� �������
{
public:
	Laptop(string _name, double _price, int _baterylife, int _power_usage); //�����������
	void showinfo(); //����������� ����� ����������
};