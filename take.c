#include <stdio.h>
int main()
{
    float num1, num2, sum;
    printf("Enter 1st number : ");
    scanf("%f", &num1);

    printf("Enter 2nd number : ");
    scanf("%f", &num2);
    sum = num1 + num2;

    printf("sum = %f", sum);
    return 0;
}