#include <stdio.h>

int fact(int n);

int main() {
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);

  fact(n);

  printf("factorial of %d is %d\n", n, fact(n));

  return 0;
}

int fact(int n) {
  if (n == 0) {
    return 1;
  }
  else if (n == 1) {
    return 1;
  }
  else {
    return n * fact(n-1);
  }
}
