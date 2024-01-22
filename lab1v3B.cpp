#include <iostream>
#include <cmath>

int main() {
    double x = 3.74e-2;
    double y = -0.825;
    double z = 0.16e2;

    std::cout << "Коэффициенты: x = " << x << " y = " << y << " z = " << z << std::endl;

    double a = 1 + pow(sin(x+y), 2);
    double b = (fabs(x-((2*y)/(1+(pow(x,2)*pow(y,2))))));
    double c = pow(x,fabs(y));
    double d = pow(cos(atan(1/z)), 2);

    double s = ((a/b)*c) + d;

    std::cout << "Ответ: " << s << std::endl;

    return 0;
}