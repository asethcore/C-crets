//bubble sort
#include <stdio.h>

void bub(int A[], int n);
void print(int A[], int n);

int main() {
  int A[] = {98, 2, 69, 29, 20, 12, 33, 1};
  int n=sizeof(A)/sizeof(A[0]);

  bub(A, n);
  print(A, n);
}

void bub(int A[], int n) {
  int s, t;
  for (int i=0; i<n-1; i++) {
    s=0;
    for (int j=0; j<n-i-1; j++) {
      if (A[j] > A[j+1]) {
        t=A[j];
        A[j]=A[j+1];
        A[j+1]=t;
        s=1;
      }
    }
    if (s==0) {
      break;
    }
  }
}

void print(int A[], int n) {
  for (int i=0; i<n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}
