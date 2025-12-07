#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    srand(time(0));

    printf("Rock Paper Scissors Game\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please choose between 1 and 3.\n");
        return 0;
    }

    computerChoice = (rand() % 3) + 1;  

    printf("\nYou chose: ");
    if (userChoice == 1) printf("Rock");
    else if (userChoice == 2) printf("Paper");
    else printf("Scissors");

    printf("\nComputer chose: ");
    if (computerChoice == 1) printf("Rock");
    else if (computerChoice == 2) printf("Paper");
    else printf("Scissors");

    if (userChoice == computerChoice)
        printf("\nIt's a Draw!\n");
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
        printf("\nYou Win!\n");
    else
        printf("\nYou Lose!\n");

    return 0;
}
