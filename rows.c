#include <stdio.h>
int main ()
{
    int rows, space, i, j, natural = 1;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++)
    {
        for (space=1; space<=rows-i; space++)
        printf("  ");
        for (j=1; j<=i; j++)
        { 
            printf("%d", natural);
            natural++;
        }
        printf(" \n");
    }
    return 0;
}