#include <stdio.h>

struct book {
  int pages;
  float price;
  char name[50];
  char author[50];
};

int main() {
  struct book book1;

  book1.pages = 215;
  snprintf(book1.name, sizeof(book1.name), "Norwegian Wood");
  snprintf(book1.author, sizeof(book1.author), "Haruki Murakami");
  book1.price = 100.0;

  struct book book2;

  book2.pages = 300;
  snprintf(book2.name, sizeof(book2.name), "Desire");
  snprintf(book2.author, sizeof(book2.author), "Haruki Murakami");
  book2.price = 30.0;

  printf("Books details:\n");
  printf("Book names: %s, %s\n", book1.name, book2.name);
  printf("Authors: %s, %s\n", book1.author, book2.author);
  printf("Pages: %d, %d\n", book1.pages, book2.pages);
  printf("Prices: %.2f, %.2f\n", book1.price, book2.price);

  return 0;
}
