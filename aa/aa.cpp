#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number, evenSum = 0, oddSum = 0;

    cout << "Введите числа (введите 0 для завершения):" << endl;

    while (true) 
    {
        cin >> number;

        if (number == 0) 
        {
            break;
        }

        if (number % 2 == 0) 
        {
            evenSum += number;
        }
        else 
        {
            oddSum += number;
        }
    }

    cout << "Сумма четных чисел: " << evenSum << endl;
    cout << "Сумма нечетных чисел: " << oddSum << endl;

    return 0;
}