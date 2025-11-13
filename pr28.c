#include <stdio.h>
#include <string.h>
struct BookDetails {
    int accession_no;
    char title[100];
    char author[100];
    float price;
    int is_issued;
};

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct BookDetails book;

    printf("--- CHARUSAT Library Book Management System ---\n");
    printf("Please enter details for a single book.\n\n");


    printf("Enter Accession Number: ");
    scanf("%d", &book.accession_no);

    clear_input_buffer();

    printf("Enter Title: ");
    scanf("%99[^\n]", book.title);
    clear_input_buffer();
    printf("Enter Author Name: ");
    scanf("%99[^\n]", book.author);
    clear_input_buffer();
    printf("Enter Price: ");
    scanf("%f", &book.price);

    printf("Is the book issued? (1 for issued, 0 for available): ");
    scanf("%d", &book.is_issued);


    printf("\n\n--- Book Details Verification ---\n");
    printf("----------------------------------------\n");
    printf("Accession Number: %d\n", book.accession_no);
    printf("Title:              %s\n", book.title);
    printf("Author:             %s\n", book.author);
    printf("Price:              %.2f\n", book.price);

    if (book.is_issued == 1) {
        printf("Status:             Issued\n");
    } else if (book.is_issued == 0) {
        printf("Status:             Available\n");
    } else {
        printf("Status:             Unknown (Invalid input: %d)\n", book.is_issued);
    }
    printf("----------------------------------------\n");

    printf("\n--- End of Program ---\n");

    return 0;
}
