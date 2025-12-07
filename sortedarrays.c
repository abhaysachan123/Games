#include <stdio.h>

void mergeSortedArrays(int a[], int n, int b[], int m, int c[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];
}

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int n = 4, m = 4;
    int c[n + m];

    mergeSortedArrays(a, n, b, m, c);

    printf("Merged sorted array: ");
    for (int i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    printf("\n");
    return 0;
}
