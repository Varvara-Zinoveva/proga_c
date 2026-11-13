#include <iostream>

using namespace std;

int sumup(int n = 1)
{
    if (n <= 0)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

void calcu(int a, int b, int &sumRe, int &prodRe)
{
    sumRe = a + b;
    prodRe = a * b;
}

int main()
{

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int sym = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sym += matrix[i][j];
        }
    }
    cout << "Сумма всех элементов: " << sym << "\n";

    int num[3];

    for (int j = 0; j < 3; j++)
    {
        num[j] = matrix[0][j] + matrix[1][j];
    }

    cout << "Суммы столбцов: ";
    for (int j = 0; j < 3; j++)
    {
        std::cout << num[j] << " ";
    }
    cout << "\n";

    float numi = 20.84f;

    float &r1 = numi;
    float &r2 = numi;

    r1 = 55.12f;

    cout << "Проверка: num = " << num << ", r2 = " << r2 << "\n";

    double num1;
    cout << "Введите число: ";
    cin >> num1;
    cout << "Вывод функции: " << sumup(num1) << "\n";

    cout << "Вызов без параметра: " << sumup() << "\n";

    int s = 0;
    int p = 0;
    calcu(4, 5, s, p);
    cout << "После вызова функции: сумма = " << s << ", произведение = " << p << "\n";

    int ou = 100;
    cout << "ou = " << ou << "\n";

    for (int k = 0; k < 3; k++)
    {
        cout << "Попытка " << k + 1 << ":\n";

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }

        int inn = 777;

        cout << "Внутренняя переменная: " << inn << "\n";
    }

    return 0;
}
