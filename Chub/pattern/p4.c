#include <stdio.h>

int main() {
  char alpha = 'a';
  for (int i=1; i<=5; i++) {
    for (int j=1; j<=i; j++) {
      printf("%c ", alpha);
      alpha++;
    }
    printf("\n");
  }
  return 0;
}

/* Output
a
b c
d e f
g h i j
k l m n o
*/
