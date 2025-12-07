#include <stdio.h>

int main() {
    int age;
    int price;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 3)
        price = 0;
    else if (age <= 12)
        price = 100;
    else if (age <= 60)
        price = 200;
    else
        price = 150;

    if (price == 0)
        printf("Ticket is Free! \n");
    else
        printf("Ticket Price: Rs.%d\n", price);

    return 0;
}
