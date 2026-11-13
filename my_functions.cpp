#include "my_functions.h"
#include <iostream>

using namespace std;

namespace math
{
void printone(int num)
{
    static int p = 0;
    cout << "Сумма: " << (num + p) << "\n";
    p = num;
}
} // namespace math
