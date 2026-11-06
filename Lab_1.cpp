#include <iostream> //подключает библиотеку
#include <string>

int main()
{ // главная функция
    // Write C++ code here
    std::cout << "Задание 1 " << "\n";

    std::cout << "First string" << "\n"; // вывод первой строки

    std::cout << "Second string" << "\n"; // вывод второй строки

    std::cout << "Спецсимвол \" \\ \" " << "\n"; // вывод спецсимвола

    std::cout << "Задание 2 " << "\n";

    int inte = 150;
    float flo = 15.933f;
    unsigned char smal = 250;
    std::cout << "inte = " << inte << "\n";
    std::cout << "flo = " << flo << "\n";
    std::cout << "smal = " << static_cast<int>(smal) << "\n\n";

    unsigned char day = 22;
    std::string month = "января";
    unsigned short year = 2007;

    std::cout << "Моя дата рождения: " << static_cast<int>(day) << " " << month << " " << year << " года\n\n";

    const double const_num = 2.3;
    const std::string const_str = "WINDOWS";

    std::cout << const_num << " " << const_str << "\n";

    return 0;
} // заканчивается тело функции
