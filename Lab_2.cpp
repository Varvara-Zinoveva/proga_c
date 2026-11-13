#include <iostream>

using namespace std;

int main()
{
    std::cout << "Задание 1 " << "\n";

    double num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    double ave = (num1 + num2) / 2.0;
    cout << "Среднее арифметическое: " << ave << "\n";

    char sym;
    cout << "Введите знак операции (+, -, * или /): ";
    cin >> sym;

    /* 5. Реализация через условный оператор if-else
    if (sym == '+')
    {
        cout << "Результат: " << num1 + num2 << "\n";
    }
    else if (sym == '-')
    {
        cout << "Результат: " << num1 - num2 << "\n";
    }
    else if (sym == '*')
    {
        cout << "Результат: " << num1 * num2 << "\n";
    }
    else if (sym == '/')
    {
        if (num2 != 0)
        {
            cout << "Результат: " << num1 / num2 << "\n";
        }
        else
        {
            cout << "Ошибка: деление на ноль!" << "\n";
        }
    }
    else
    {
        cout << "Неверный знак операции!" << "\n";
    }*/

    switch (sym)
    {
        case '+':
            cout << "Результат: " << num1 + num2 << "\n";
            break;
        case '-':
            cout << "Результат: " << num1 - num2 << "\n";
            break;
        case '*':
            cout << "Результат: " << num1 * num2 << "\n";
            break;
        case '/':
            if (num2 != 0)
            {
                cout << "Результат: " << num1 / num2 << "\n";
            }
            else
            {
                cout << "Ошибка: деление на ноль!" << "\n";
            }
            break;
        default:
            cout << "Неизвестный знак операции!" << "\n";
    }

    std::cout << "Задание 2 " << "\n";

    int n;
    while (true)
    {
        cout << "Введите целое положительное число: ";
        cin >> n;

        if (n > 0)
        {
            break;
        }
        cout << "Ошибка! Число должно быть положительным.\n";
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Сумма чисел от 1 до " << n << ": " << sum << "\n";

    int numbers[10] = {1, 2, 85, 34, 19, 4, 7, 10, 2, 15};

    cout << "Элементы массива: ";
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i];
        cout << " ";
    }

    cout << "\n";

    cout << "Числа на чётных позициях: ";
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << numbers[i] << " ";
        }
    }
    cout << "\n";

    cout << "Числа на нечётных позициях: ";
    int nech = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            nech += numbers[i];
        }
    }
    cout << "Сумма элементов на нечётных позициях: " << nech << "\n";

    std::cout << "Задание 3 " << "\n";

    return 0;
}
