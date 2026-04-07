#include <iostream>
#include <windows.h>

struct address {
    std::string city;
    std::string street;
    int houseNumber;
    int appartmentNumber;
    int index;
};

void printAddress(address& address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Дом: " << address.houseNumber << std::endl;
    std::cout << "Квартира: " << address.appartmentNumber << std::endl;
    std::cout << "Индекс: " << address.index << std::endl;
}

void main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int amount = 0;

    while (amount == 0) {
        std::cout << "Введите количество адрессов: ";
        std::cin >> amount;
        if (amount <= 0) {
            std::cout << "Минимальное количество адрессов 1" << std::endl;
            amount = 0;
        }
    }

    address* address_arr = new address[amount];

    for (int i = 0; i < amount; i++) {

        std::cout << std::endl << "Введите название города: ";
        std::cin >> address_arr[i].city;

        std::cout << "Введите название улицы: ";
        std::cin >> address_arr[i].street;

        std::cout << "Введите номер дома: ";
        std::cin >> address_arr[i].houseNumber;

        std::cout << "Введите номер квартиры: ";
        std::cin >> address_arr[i].appartmentNumber;

        std::cout << "Введите индекс дома: ";
        std::cin >> address_arr[i].index;

    }

    for (int i = 0; i < amount; i++) {
        std::cout << std::endl << "Адрес номер " << i+1 << std::endl;
        printAddress(address_arr[i]);
    }
    

}
