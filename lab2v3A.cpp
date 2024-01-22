#include <iostream>

int main() {
    std::cout << "Введите первое число: ";
    double x;
    std::cin >> x;
    std::cout << "Введите второе число: ";
    double y;
    std::cin >> y;
    std::cout << "Введите третье число: ";
    double z;
    std::cin >> z;

    double answer = 1;
    double mark = 0;

    if (x < 0) {
        answer *= x;
        mark += 1;
    }

    if (y < 0) {
        answer *= y;
        mark += 1;
    }

    if (z < 0) {
        answer *=z;
        mark += 1;
    }

    if (mark==0) {
        std::cout << "Отрицательных чисел нет" << std::endl;
    } else {
        std::cout << "Произведение отрицательных чисел: " << answer << std::endl;
    }
}