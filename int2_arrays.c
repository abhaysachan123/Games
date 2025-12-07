#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int pos = 0, neg = 0, zero = 0;
    int odd = 0, even = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;

    
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nCount of Positive numbers = %d", pos);
    printf("\nCount of Negative numbers = %d", neg);
    printf("\nCount of Zeroes = %d", zero);
    printf("\nCount of Even numbers = %d", even);
    printf("\nCount of Odd numbers = %d\n", odd);

    return 0;
}