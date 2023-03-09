#include <iostream>
#include <string>
#include "leaver.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    Leaver lv;
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << lv.leave(name) << std::endl;
    return 0;
}