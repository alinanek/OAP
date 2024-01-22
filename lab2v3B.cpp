#include <iostream>
#include <cmath>

double f(double x) {
    std::cout << "Выберите вид функции f(x):" << std::endl << "1. sh(x)" << std::endl << "2. x^2" << std::endl << "3. e^x" << std::endl;
    int type;
    std::cin >> type;
    if (type == 1) {
        return sinh(x);
    } else if (type == 2) {
        return pow(x, 2);
    } else if (type == 3) {
        return exp(x); //экспонента в степени x
    } else {
        std::cout << "Введите ещё раз" << std::endl;
        f(x);
        return 0;
    }
}

int main() {
    std::cout << "Введите x = ";
    double x;
    std::cin >> x;
    std::cout << "Введите y = ";
    double y;
    std::cin >> y;
    
    double fx = f(x);
    double c = 0;
    if ((x-y)==0) {
        c = pow(fx, 2) + cbrt(y) + sin(y);
    } else if ((x-y)>0) {
        c = pow((fx - y), 2) + log(x);
    } else {
        c = pow((y - fx), 2) + tan(y);
    }

    std::cout << "Ответ: " << c << std::endl;
}