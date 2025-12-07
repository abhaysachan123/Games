#include <stdio.h>

void modifyValues(int *x, float *y, char *z) {
    *x = *x + 10;    
    *y = *y * 2;     
    *z = *z + 1;     
}

int main() {
    int a = 5;
    float b = 3.5;
    char c = 'A';

    printf("Before modification:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    modifyValues(&a, &b, &c);

    printf("\nAfter modification:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}
