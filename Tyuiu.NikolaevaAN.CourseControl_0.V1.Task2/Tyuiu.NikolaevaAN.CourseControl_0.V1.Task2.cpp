﻿// Tyuiu.NikolaevaAN.CourseControl_0.V1.Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.NikolaevaAN.CourseControl_0.V1.Task2.Lib/Tyuiu.NikolaevaAN.CourseControl_0.V1.Task2.Lib.cpp"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Николаева\tАлександра\tНиколаевна\n";
    cout << endl;
    cout << "CousreControl_0.V1.Task2\n" << endl;
    cout << "Введите число x: ";
    int x;
    cin >> x;
    cout << "Введите число y: ";
    int y;
    cin >> y;
    cout << "Введите число z: ";
    int z;
    cin >> z;
    cout << endl;

    Control_0* date = new Control_0();
    cout << "Выражение с данными числами будет равно " << date->Control(x, y, z);
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
