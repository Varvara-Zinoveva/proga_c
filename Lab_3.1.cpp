#include <iostream>

using namespace std;

int sumArray(const int *be, const int *end)
{
    int sum = 0;
    for (const int *pointer = be; pointer < end; ++pointer)
    {
        sum += *pointer;
    }
    return sum;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int (*getOperation(char op))(int, int)
{
    if (op == '+')
    {
        return add;
    }
    else if (op == '-')
    {
        return subtract;
    }
    return nullptr;
}

int main()
{
    // 2. Проверка функции sumArray
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "2. Сумма элементов массива: " << sumArray(arr, arr + size) << "\n";

    int (*operationPtr)(int, int) = getOperation('+');
    if (operationPtr != nullptr)
    {
        cout << "Результат сложения (15 + 7): " << operationPtr(15, 7) << "\n";
    }

    operationPtr = getOperation('-');
    if (operationPtr != nullptr)
    {
        cout << "Результат вычитания (15 - 7): " << operationPtr(15, 7) << "\n";
    }

    float *dynamicFloat = new float(3.14f);

    cout << "8. Значение динамического float: " << *dynamicFloat << "\n";
    delete dynamicFloat;
    dynamicFloat = nullptr;
    return 0;
}
