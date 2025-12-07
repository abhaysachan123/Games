#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void displayBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
}

int main() {
    struct Book b1;

    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);
    getchar(); 

    printf("Enter Title: ");
    gets(b1.title);  

    printf("Enter Author Name: ");
    gets(b1.author);+

    printf("Enter Price: ");
    scanf("%f", &b1.price);

    displayBook(b1);

    return 0;
}
