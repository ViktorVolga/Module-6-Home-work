#include "iostream"
#include "Appliances.h"
#include <string>
#include "device.h"
#include "refrigerators.h"
#include "Laptop.h"



int main()
{
	Appliances* shop[3]; //��������� ������ ������ ���������
	shop[0] = new Device("iphone", 50, 50); //������ ������
	shop[1] = new Refrigerators("Stinol", 100, 78); //����������� ���������
	shop[2] = new Laptop("Asus", 150, 40, 60); // � ���� ���
    bool open = true; //������ ���������� ���������� ��� �����
    while (open)
    {
        cout << "Chose applience: 1 - Device, 2 - Refrigerator, 3 - Laptop, 0 - exit " << endl << endl; //������ �������
        int choice; //������ ���������� ��� ������
        cin >> choice; // ��������� ���� 
        switch (choice) //��������� ��� ����� ������� ������������
        {
        case 1:
            shop[0]->showinfo(); //�� Device
            break;

        case 2:
            shop[1]->showinfo(); //�� Refrigerators
            break;

        case 3:
            shop[2]->showinfo();//�� Laptop
            break;

        case 0:
            open = false; //���������� �����
            break; //��������� ���������

        default:
            break;
        }
    }
    delete shop[0]; //������� ��������� �� ������
    delete shop[1];
    delete shop[2];

    return 0;
}
