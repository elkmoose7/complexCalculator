#include <iostream>
#include <complex>
#include <locale>
#include <vector>
#include <string>
#include <Windows.h>

using namespace std;

void CreateComplexNumber(double& cReal, double& cImag, complex<double>& complexNumber);
void MakeOperation(vector<complex<double>> cNumbers);

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

        MakeOperation(cNumbers);    
        char answer;

        while (true)
        {
            cout << "Продовжити?   y/n" << endl;
            cin >> answer;
            if (answer == 'y')
            {
                system("cls");
                break;
            }
            else if (answer == 'n')
            {
                return 1;
            }
        }
        
        
    } 

}

void MakeOperation(vector<complex<double>> cNumbers)
{
    bool isSelectedOperation = false;
    while (!isSelectedOperation)
    {
        int operation;
        cout << "Виберіть операцію:\n";
        cout << " 1 + \n 2 - \n 3 * \n 4 / \n";
        cin >> operation;
        switch (operation)
        {
        case 1:
            cout << cNumbers[0] + cNumbers[1];
            isSelectedOperation = true;
            break;
        case 2:
            cout << cNumbers[0] - cNumbers[1];
            isSelectedOperation = true;
            break;
        case 3:
            cout << cNumbers[0] * cNumbers[1];
            isSelectedOperation = true;
            break;
        case 4:            
            cout << cNumbers[0] / cNumbers[1];
            isSelectedOperation = true;
            break;
        default:
            operation = 1;
            break;
        }
    }
    cout << endl;
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

