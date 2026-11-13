#include "my_functions.h"
#include <iostream>

#define SUM(a, b) ((a) + (b))

using namespace std;

int main()
{

    math::printone(5);
    math::printone(10);
    math::printone(33);

    cout << "Макрос SUM(1, 2): " << SUM(1, 2) << "\n";

    return 0;
}
