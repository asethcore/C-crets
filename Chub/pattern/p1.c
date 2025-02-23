#include <stdio.h>

int main() {
  char alpha = 'a';
  for (int i=5; i>=1; i--) {
    for (int j=i; j>=1; j--) {
      printf("%c ", alpha);
      alpha++;
    }
    printf("\n");
  }
  return 0;
}

/* Output
a b c d e
f g h i
j k l
m n
o
*/
