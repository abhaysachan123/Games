#include <stdio.h>
int main ()
{
    float celsius, farhenheit;

    printf("Enter temperature in Celsius : ");
    scanf("%f", &celsius);

    farhenheit = (celsius * 9.0/5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f", farhenheit);
    return 0;
}