#include <iostream>
#include <complex>
#include <locale>
#include <vector>
#include <string>
#include <Windows.h>

using namespace std;

void CreateComplexNumber(double& cReal, double& cImag, complex<double>& complexNumber);
complex<double> MakeOperation(vector<complex<double>> cNumbers);

int main()
{
    setlocale(LC_ALL, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double cReal, cImag;
    bool isSaveNumber = false;
    vector<complex<double>> cNumbers(2);
    while (true)
    {
        cout << "Перше" << endl;
        if (!isSaveNumber) 
        {
            CreateComplexNumber(cReal, cImag, cNumbers[0]);
        }
        else
        {
            cout << "Комплексне число " << cNumbers[0] << endl;
        }
        cout << "\nДруге" << endl;
        CreateComplexNumber(cReal, cImag, cNumbers[1]);

        complex<double> result = MakeOperation(cNumbers);    
        char answer;
        isSaveNumber = false;
        while (true)
        {
            cout << "Продовжити/Зберегти число?   y - продовжити n - вийти s - зберегти і продовжити" << endl;
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
            else if (answer == 's')
            {
                cNumbers[0] = result;
                isSaveNumber = true;
                system("cls");
                break;
            }
        }
        
        
    } 

}

complex<double> MakeOperation(vector<complex<double>> cNumbers)
{
    bool isSelectedOperation = false;
    complex<double> result;
    while (!isSelectedOperation)
    {
        int operation;        
        cout << "Виберіть операцію:\n";
        cout << " 1 + \n 2 - \n 3 * \n 4 / \n";
        cin >> operation;
        
        switch (operation)
        {
        case 1:
            result = cNumbers[0] + cNumbers[1];
            isSelectedOperation = true;
            break;
        case 2:
            result = cNumbers[0] - cNumbers[1];
            isSelectedOperation = true;
            break;
        case 3:
            result = cNumbers[0] * cNumbers[1];
            isSelectedOperation = true;
            break;
        case 4:            
            result = cNumbers[0] / cNumbers[1];
            isSelectedOperation = true;
            break;
        default:
            operation = 1;
            break;
        }
    }
    cout << result << endl;
    return result;
}

void CreateComplexNumber(double& cReal, double& cImag, complex<double>& complexNumber)
{
    cout << "Введіть реальну частину числа" << endl;
    cin >> cReal;
    cout << "Введіть мниму частину числа" << endl;
    cin >> cImag;

    complex<double> cNumber(cReal, cImag);
    cout << "Комплексне число " << cNumber << endl;
    complexNumber = cNumber;
    
}

