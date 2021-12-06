#include <stdio.h>
#include <string.h>

struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
};

void print_book(struct Books* pBook);


int main() {

   struct Books book1;
   struct Books book2;
   
   strcpy(book1.title, "C Programming");
   strcpy(book1.author, "Nuha Ali"); 
   strcpy(book1.subject, "C Programming Tutorial");
   book1.book_id = 6495407;


   strcpy(book2.title, "Telecom Billing");
   strcpy(book2.author, "Zara Ali"); 
   strcpy(book2.subject, "Telecom Billing Tutorial");
   book2.book_id = 6495700;

   print_book(&book1);
   print_book(&book2);

   return 0;
}

void print_book(struct Books* pBook) {

   printf( "Book title : %s\n", pBook->title);
   printf( "Book author : %s\n", pBook->author);
   printf( "Book subject : %s\n", pBook->subject);
   printf( "Book book_id : %d\n", pBook->book_id);

}