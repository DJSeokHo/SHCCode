#include <stdio.h>
#include <string.h>
 
typedef struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} BookStructType;


/* 以下两种都可以 */
// void printBook(struct Books book);
void print_book(BookStructType book);

int main() {

    BookStructType book1;
    BookStructType book2;
    
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali"); 
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;


    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali"); 
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    print_book(book1);
    print_book(book2);

}

void print_book(BookStructType book) {
    printf( "Book 2 title : %s\n", book.title);
    printf( "Book 2 author : %s\n", book.author);
    printf( "Book 2 subject : %s\n", book.subject);
    printf( "Book 2 book_id : %d\n", book.book_id);
}