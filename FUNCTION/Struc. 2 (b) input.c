/*
b) Write a C program to store the following information about books and perform the
following operations:

i. Create a structure named Book with the following members: title (string),
author (string), price (float), and year (int).
ii. Declare an array of size 50 of type Book structures.
iii. Take inputs (title, author, price, year) from the keyboard and store them in the
array.
iv. Find and display the details of the most expensive book.

*/


#include <stdio.h>
#include <string.h>

#define SIZE 50

struct Book
{
    char title[100];
    char author[100];
    float price;
    int year;
};

int main()
{
    struct Book books[SIZE];
    int n, i, maxIndex = 0;
    float maxPrice = 0;

    printf("How many books do you want to enter (max 50)? ");
    scanf("%d", &n);

    if (n > SIZE || n <= 0)
    {
        printf("Invalid number of books.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Book %d:\n", i + 1);
        getchar();

        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; // Newline remove

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';  // Newline remove

        printf("Price: ");
        scanf("%f", &books[i].price);

        printf("Year: ");
        scanf("%d", &books[i].year);


        if (books[i].price > maxPrice)
        {
            maxPrice = books[i].price;
            maxIndex = i;
        }
    }

    printf("\nMost Expensive Book:\n");
    printf("Title : %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price : %.2f\n", books[maxIndex].price);
    printf("Year  : %d\n", books[maxIndex].year);

    return 0;
}
