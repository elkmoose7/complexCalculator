﻿#include <iostream>
#include <complex>
#include <locale>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double cReal, cImag;

    cout << "Введіть реальну частину частину" << endl;
    cin >> cReal;
    cout << "Введіть мниму частину числа" << endl;
    cin >> cImag;

    complex<double> cNumber(cReal, cImag);

    cout << "Комплексне число " << cNumber << endl;
}

