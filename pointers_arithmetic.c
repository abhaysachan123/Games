#include <stdio.h>

int main() {
    int a = 10, *ptr_int;
    float b = 25.75, *ptr_float;
    char c = 'A', *ptr_char;

    ptr_int = &a;
    ptr_float = &b;
    ptr_char = &c;

    printf("Original addresses:\n");
    printf("Integer pointer: %p\n", ptr_int);
    printf("Float pointer  : %p\n", ptr_float);
    printf("Char pointer   : %p\n\n", ptr_char);

    ptr_int++;
    ptr_float++;
    ptr_char++;

    printf("After incrementing:\n");
    printf("Integer pointer: %p\n", ptr_int);
    printf("Float pointer  : %p\n", ptr_float);
    printf("Char pointer   : %p\n\n", ptr_char);

    ptr_int--;
    ptr_float--;
    ptr_char--;

    printf("After decrementing (back to original):\n");
    printf("Integer pointer: %p\n", ptr_int);
    printf("Float pointer  : %p\n", ptr_float);
    printf("Char pointer   : %p\n", ptr_char);

    return 0;
}
