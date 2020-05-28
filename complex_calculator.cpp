#include <iostream>
#include <complex>
#include <locale>
#include <vector>
#include <Windows.h>

using namespace std;

void CreateComplexNumber(double& cReal, double& cImag, complex<double>& complexNumber);

int main()
{
    setlocale(LC_ALL, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double cReal, cImag;
    vector<complex<double>> cNumbers(2);
    while (true)
    {
        cout << "Перше" << endl;        
        CreateComplexNumber(cReal, cImag, cNumbers[0]);
        cout << "\nДруге" << endl;
        CreateComplexNumber(cReal, cImag, cNumbers[1]);

    } 

}

void CreateComplexNumber(double& cReal, double& cImag, complex<double>& complexNumber)
{
    cout << "Введіть реальну частину частину" << endl;
    cin >> cReal;
    cout << "Введіть мниму частину числа" << endl;
    cin >> cImag;

    complex<double> cNumber(cReal, cImag);
    cout << "Комплексне число " << cNumber << endl;
    complexNumber = cNumber;
    
}

