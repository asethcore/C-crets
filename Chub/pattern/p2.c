#include <stdio.h>

int main() {
  for (int i=1; i<=5; i++) {
    for (int j=2; j<=i; j++) {
      printf(" ");
    }
    for (int k=1; k<=5+1-i; k++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

/* Output
*****
 ****
  ***
   **
    *
*/
