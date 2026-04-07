#include <iostream>
#include <windows.h>

enum Month {
    Janyary = 1,
    February,
    March,
    April,
    May,
    June,
    Jule,
    August,
    September,
    October,
    November,
    December
};

void main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> number;

        if (number == 0) {
            std::cout << "До свидания" << std::endl;
            break;
        }

        switch (static_cast<Month>(number)) {
        case Janyary: std::cout << "Январь" << std::endl; break;
        case February: std::cout << "Февраль" << std::endl; break;
        case March: std::cout << "Март" << std::endl; break;
        case April: std::cout << "Апрель" << std::endl; break;
        case May: std::cout << "Май" << std::endl; break;
        case June: std::cout << "Июнь" << std::endl; break;
        case Jule: std::cout << "Июль" << std::endl; break;
        case August: std::cout << "Август" << std::endl; break;
        case September: std::cout << "Сентябрь" << std::endl; break;
        case October: std::cout << "Октябрь" << std::endl; break;
        case November: std::cout << "Ноябрь" << std::endl; break;
        case December: std::cout << "Декабрь" << std::endl; break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    }
}



