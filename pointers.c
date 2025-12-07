#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.75;
    char c = 'A';

    
    int *ptr_int;
    float *ptr_float;
    char *ptr_char;

    ptr_int = &a;
    ptr_float = &b;
    ptr_char = &c;

    printf("Integer variable value: %d\n", a);
    printf("Integer pointer address: %p\n", ptr_int);
    printf("Value pointed by integer pointer: %d\n\n", *ptr_int);

    printf("Float variable value: %.2f\n", b);
    printf("Float pointer address: %p\n", ptr_float);
    printf("Value pointed by float pointer: %.2f\n\n", *ptr_float);

    printf("Character variable value: %c\n", c);
    printf("Character pointer address: %p\n", ptr_char);
    printf("Value pointed by character pointer: %c\n", *ptr_char);

    return 0;
}
