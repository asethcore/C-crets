//insertion sort
#include <stdio.h>

void ins(int A[], int n);
void print(int A[], int n);

int main() {
  int A[] = {0, 2, 12, 4, 26, 16, 36, 256};
  int n=sizeof(A)/sizeof(A[0]);

  ins(A, n);
  print(A, n);
}

void ins(int A[], int n) {
  for (int i=1; i<n; i++) {
    int key = A[i];
    int j = i-1;

    while (j>=0 && A[j]>key) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;
  }
}

void print(int A[], int n) {
  for (int i=0; i<n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}
