#include <stdio.h>

int main () {
    printf("Введите количество микрозивертов: ");
    float microZivert;
    scanf("%f", microZivert);

    float miliRentgen = microZivert * 0.115;

    printf("Количество микрозивертов: %f", microZivert);
    
    return 0;
}
