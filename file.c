// Q1: Write a C program to create a new file and write text into it.

#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Open file in write mode
    fp = fopen("newfile.txt", "w");

    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }

    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);  // Read a line of input from user

    // Write text into file
    fputs(text, fp);

    printf("Text successfully written to 'newfile.txt'.\n");

    // Close the file
    fclose(fp);

    return 0;
}