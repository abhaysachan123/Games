#include <stdio.h>
int globalVar = 20;

void testFunction();

int main() {

    int localVar = 10;

    printf("Inside main(): localVar = %d\n", localVar);
    printf("Inside main(): globalVar = %d\n", globalVar);

    testFunction(); 

    return 0;
}

void testFunction() {
    int localInFunction = 5;

    printf("Inside testFunction(): localInFunction = %d\n", localInFunction);
    printf("Inside testFunction(): globalVar = %d\n", globalVar);
}
