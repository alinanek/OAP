#include <iostream>
#include <cmath>

int main() {
    std::cout << "Введите n = ";
    int n;
    std::cin >> n;
    std::cout << "Введите a = ";
    double a;
    std::cin >> a;
    std::cout << "Введите b = ";
    double b;
    std::cin >> b;
    if (b < a) {
        std::cout << "Введите корректные значения";
        std::exit(0);
    }
    double h = (b - a)/10;
    double x = a;
    std::cout << "x   y(x)" << std::endl;
    while (x <= b) {
        double answer;
        for (int i = 1; i <= n; i += 1) {
            answer += (2 * tan(i * x) * exp(2 * i));
        } 
        std::cout << x << "   " << answer << std::endl;
        x += h;
    }
}