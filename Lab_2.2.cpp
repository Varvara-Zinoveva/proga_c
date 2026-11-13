#include <iostream>

using namespace std;

#define SUM(a, b) ((a) + (b))

void printone(int num)
{
    static int p = 0;

    cout << "Сумма: " << (num + p) << "\n";
    p = num;
}

int main()
{

    printone(5);
    printone(10);
    printone(33);

    cout << "Макрос SUM(1, 2): " << SUM(1, 2) << "\n";

    return 0;
}
