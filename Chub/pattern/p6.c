
#include <stdio.h>

int main() {
  for (int i=1; i<=5; i++) {
    for (int j=4; j>=i; j--) {
      printf(" ");
    }
    for (int k=i; k>=1; k--) {
      printf("%d", k);
    }
    printf("\n");
  }
  return 0;
}

/* Output
    1
   21
  321
 4321
54321
*/
