#include "iostream"
#include "Appliances.h"
#include <string>
#include "device.h"
#include "refrigerators.h"
#include "Laptop.h"



int main()
{
	Appliances* shop[3]; //объявляем массив класса устройств
	shop[0] = new Device("iphone", 50, 50); //Девайс вводим
	shop[1] = new Refrigerators("Stinol", 100, 78); //холодильник добавляем
	shop[2] = new Laptop("Asus", 150, 40, 60); // и ноут бук
    bool open = true; //вводим логическую переменную для цикла
    while (open)
    {
        cout << "Chose applience: 1 - Device, 2 - Refrigerator, 3 - Laptop, 0 - exit " << endl << endl; //запрос выводим
        int choice; //вводим переменную для выбора
        cin >> choice; // принимаем ввод 
        switch (choice) //Проверяем что хочет вывести пользователь
        {
        case 1:
            shop[0]->showinfo(); //из Device
            break;

        case 2:
            shop[1]->showinfo(); //из Refrigerators
            break;

        case 3:
            shop[2]->showinfo();//из Laptop
            break;

        case 0:
            open = false; //Выключение цикла
            break; //прирываем программу

        default:
            break;
        }
    }
    delete shop[0]; //удаляем указатели из памяти
    delete shop[1];
    delete shop[2];

    return 0;
}
