#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int user, computer;

    srand(time(0)); // Seed random generator

    printf("---- Rock Paper Scissors Game ----\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    computer = (rand() % 3) + 1;

    printf("You chose: ");
    if (user == 1) printf("Rock\n");
    else if (user == 2) printf("Paper\n");
    else if (user == 3) printf("Scissors\n");
    else {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Computer chose: ");
    if (computer == 1) printf("Rock\n");
    else if (computer == 2) printf("Paper\n");
    else printf("Scissors\n");

    if (user == computer)
        printf("Result: Draw\n");
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
        printf("Result: You Win!\n");
    else
        printf("Result: Computer Wins!\n");

    return 0;
}