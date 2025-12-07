#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidPassword(char password[]) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    if (length < 8)
        return 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (strchr("!@#$%^&*", password[i]))
            hasSpecial = 1;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        return 1;
    else
        return 0;
}

int main() {
    char password[100];

    printf("Enter your password: ");
    scanf("%s", password);

    if (isValidPassword(password))
        printf("Password is valid \n");
    else
        printf("Password is invalid \n\n"
               "Password must contain:\n"
               "- At least 8 characters\n"
               "- At least one uppercase letter (A-Z)\n"
               "- At least one lowercase letter (a-z)\n"
               "- At least one digit (0-9)\n"
               "- At least one special character (!, @, #, $, %%, ^, &, *)\n");

    return 0;
}
