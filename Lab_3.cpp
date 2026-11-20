#include <iostream>

using namespace std;

int main()
{

    int num = 52;

    int *pointer = &num;

    cout << "Адрес в указателе: " << pointer << ", значение по адресу: " << *pointer << "\n";

    *pointer = 100;

    cout << "Новое значение переменной num: " << num << "\n";

    int arr[5] = {1, 2, 3, 4, 5};

    int *arrpointer = arr;
    cout << "Элементы массива: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arrpointer + i) << " ";
    }
    cout << "\n";

    int aaa = 5;

    int *const constanta = &aaa;

    int otherAaa = 99;
    // constanta = &otherAaa;//

    *constanta = 777;
    cout << "Новое значение переменной val: " << aaa << "\n";

    return 0;
}
