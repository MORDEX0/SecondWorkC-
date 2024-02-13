

#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");
    int choose, i, fac, fac2;
    double a, b, result, result2;
    cout << "Введите действие которое хотите выполнить: \n1)Сложение\n2)Вычитание\n3)Деление\n4)Умножение\n5)Возведение в степень\n6)Найти квадратный корень\n7)Нахождение 1 процента от переменных\n8)Факториал\n9)Выход из программы\nВаш выбор: ";
    cin >> choose;
    switch (choose) {
        case 1:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a + b;
            cout << "Сумма чисел: " << result << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a - b;
            cout << "Разность чисел: " << result << endl;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a * b;
            cout << "Произведение чисел: " << result << endl;
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a / b;
            cout << "Деление a на b чисел: " << result << endl;
            break;
        case 5:
            cout << "Введите первое число(которое хотите возвести): ";
            cin >> a;
            cout << "Введите второе число(степень): ";
            cin >> b;
            result = pow(a, b);
            cout << "Возведение a в степень b: " << result << endl;
            break;
        case 6:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = sqrt(a);
            result2 = sqrt(b);
            cout << "Корень чиселa a: " << result << endl;
            cout << "Корень чисела b: " << result2 << endl;
            break;
        case 7:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a / 100;
            result2 = b / 100;
            cout << "1 процент от а: " << result << endl;
            cout << "1 процент от b: " << result2 << endl;
            break;
        case 8:
            cout << "Введите первое число: ";
            cin >> fac;
            cout << "Введите второе число: ";
            cin >> fac2;
            result = 1;
            result2 = 1;
            for (i = 1; i <= fac; i++) {
                result = result * i;
            }
            for (i = 1; i <= fac2; i++) {
                result2 = result2 * i;
            }
            cout << "Факториал a: " << result << endl;
            cout << "Факторил b: " << result2 << endl;
            break;
        case 9:
            cout << "Выход из программы...";
            break;
    }
        
}

