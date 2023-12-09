// main.cpp
#include <iostream>
#include "math_functions.h"
#include <Windows.h>

int main() {
    char operation;
    double num1, num2;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Вывод меню
    std::cout << "Выберите операцию (+, -, *, /): ";
    std::cin >> operation;

    // Запрос пользователю ввести 2 числа
    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;

    // Вызов соответствующей функции и вывод результата
    switch (operation) {
    case '+':
        std::cout << "Результат: " << add(num1, num2) << std::endl;
        break;
    case '-':
        std::cout << "Результат: " << subtract(num1, num2) << std::endl;
        break;
    case '*':
        std::cout << "Результат: " << multiply(num1, num2) << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << "Результат: " << divide(num1, num2) << std::endl;
        }
        else {
            std::cout << "Ошибка: деление на ноль!" << std::endl;
        }
        break;
    default:
        std::cout << "Неверная операция." << std::endl;
    }

    return 0;
}
