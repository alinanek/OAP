#include <iostream>

int main () {
    std::cout << "Введите количество микрозивертов: ";
    double microZivert;
    std::cin >> microZivert;

    double miliRentgen = microZivert * 0.115;

    std::cout << "Количество милирентгенов:" << miliRentgen << std::endl;
    
    return 0;
}
