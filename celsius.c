#include <stdio.h>
#define FREEAING_RT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)


int
main (void)
{
    float fahrenheit, celsius;
    
    printf("Введите значение по Фаренгейту: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - FREEAING_RT) *SCALE_FACTOR;

    printf("По цельсию это равно: %.1f\n", celsius);



    return 0;
}


