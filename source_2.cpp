#include <iostream>
#include <windows.h>

struct account {
    int accountNumber;
    std::string name;
    double balance;
};

void changeBalance(account& account, double newBalance) {
    account.balance = newBalance;
}

void main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    account account;

    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin >> account.name;

    std::cout << "Введите текущий баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << std::endl << "Введите новый баланс счёта: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << std::endl <<"Обновлённая информация о счёте: " << std::endl;
    std::cout << "Номер счёта: " << account.accountNumber << std::endl;
    std::cout << "Имя владельца: " << account.name << std::endl;
    std::cout << "Баланс: " << account.balance << std::endl;

}




