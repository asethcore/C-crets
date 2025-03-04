#include <stdio.h>

int fibo(int n);

int main() {
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);

  fibo(n);

  printf("Fibonacci Series: ");
  for (int i=0; i<n; i++) {
    printf("%d ", fibo(i));
  }

  printf("\n");

  return 0;
}

int fibo(int n) {
  if (n<=0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibo(n-1) + fibo(n-2);
  }
}
