﻿// lab_7_zad_1_return.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Написать функцию f(a,b), вычисляющую и возвращающую площадь прямоугольника по заданным длинам его сторон a и b. 
//Продемонстрировать ее работу для трех прямоугольников.//RETURN

#include <iostream>

using namespace std;

int plosh(float a, float b) {//функция определяет площадь прямоугольника
   
       float pl = a * b;// площадь прямоугольников
   
    return pl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int x1, y1, x2, y2, x3, y3;
    int k = 3;//3 прямоугольника
    while (k != 0) {
        cout << "Укажите первую сторону прямоугольника1:";
        cin >> x1;
        cout << "Укажите вторую сторону прямоугольника1:" ;
        cin >> y1;

        cout << endl;

        cout << "Укажите первую сторону прямоугольника2:";
        cin >> x2;

        cout << "Укажите вторую сторону прямоугольника2:";
        cin >> y2;

        cout << endl;

        cout << "Укажите первую сторону прямоугольника3:";
        cin >> x3;

        cout << "Укажите вторую сторону прямоугольника3:";
        cin >> y3;

        cout << endl;

        k -= 1;//уменьшаем колво прямоугольников

        cout << "Площадь1 " << plosh(x1, y1) << endl;
        cout << "Площадь2 " << plosh(x2, y2) << endl;
        cout << "Площадь3 " << plosh(x3, y3) << endl;

        break;
    }
    return 0;
}

