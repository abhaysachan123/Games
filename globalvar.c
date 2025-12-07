#include <stdio.h>

int num = 10;

void display();
void modify();

int main() {
    printf("Inside main(): num = %d\n", num);
    display();   
    modify();    
    display();   
    return 0;
}

void display() {
    printf("Inside display(): num = %d\n", num);
}

void modify() {
    num = num + 5;
    printf("Inside modify(): num is modified to %d\n", num);
}
