#include <stdio.h>

int main() {
  int m, n, a, b;
  printf("Enter the number of rows and columns for the first matrix: ");
  scanf("%d %d", &m, &n);
  printf("Enter the number of rows and columns for the second matrix: ");
  scanf("%d %d", &a, &b);

  if (m!=a || n!=b) {
    printf("The matrices cannot be added.\n");
    return 1;
  }

  //taking input for 1st matrix
  int A[m][n];
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      printf("Enter the element A[%d][%d]: ", i+1, j+1);
      scanf("%d", &A[i][j]);
    }
  }

  //taking input for 2nd matrix
  int B[a][b];
  for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      printf("Enter the element B[%d][%d]: ", i+1, j+1);
      scanf("%d", &B[i][j]);
    }
  }

  //printing the matrices
  printf("Matrix A:\n");
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  printf("Matrix B:\n");
  for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }

  //adding the matrices
  int S[m][n];
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      S[i][j] = A[i][j] + B[i][j];
    }
  }

  //printing the sum matrix
  printf("Sum of given two matrices:\n");
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      printf("%d ", S[i][j]);
    }
    printf("\n");
  }
  return 0;
}
