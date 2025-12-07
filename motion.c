#include <stdio.h>
int main() {
    float s, u, a, t;

    printf("Enter initial velocity(u) : ");
    scanf("%f", &u);

    printf("Enter acceleration(a) : ");
    scanf("%f", &a);

    printf("Enter time(t) : ");
    scanf("%f", &t);

    s = ( u * t ) + ( 0.5 * a * t * t );

    printf("Displacement(s) = %.2f", s);
    return 0;
}