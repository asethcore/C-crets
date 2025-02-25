// Selection sort
#include <stdio.h>

void line(int A[], int n);
void print(int A[], int n);

int main() {
  int A[] = {10, 20, 1, 56, 0, 9, 20};
  int n=sizeof(A)/sizeof(A[0]);

  line(A, n);
  print(A, n);

  return 0;
}

void line(int A[], int n) {
  int M, T;
  for (int i=0; i<n-1; i++) {
    M=i;
    for (int j=i+1; j<n; j++) {
      if (A[j] < A[M]) {
        M=j;
      }
    }
    if (M != i) {
     T=A[i];
     A[i]=A[M];
     A[M]=T;
    }
  }
}

void print(int A[], int n) {
  for (int i=0; i<n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}
