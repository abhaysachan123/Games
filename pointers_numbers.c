#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr; 

    largest = *ptr;
    smallest = *ptr;

    for (i = 1; i < n; i++) {
        ptr++;

        if (*ptr > largest)
            largest = *ptr;

        if (*ptr < smallest)
            smallest = *ptr;
    }

    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
