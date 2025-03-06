//product of two matrices
#include <stdio.h>

int main() {
  int m, n;
  printf("Enter the number of rows and columns for the first matrix: ");
  scanf("%d %d", &m, &n);
  int r, c;
  printf("Enter the number of rows and columns for the second matrix: ");
  scanf("%d %d", &r, &c);

  if (n != r) {
    printf("The matrices cannot be multiplied with each other\n");
    return 0;
  }

  int A[m][n];

  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      printf("Enter the element at position (%d, %d) for the first matrix: ", i+1, j+1);
      scanf("%d", &A[i][j]);
    }
  }

  int B[r][c];

  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      printf("Enter the element at position (%d, %d) for the second matrix: ", i+1, j+1);
      scanf("%d", &B[i][j]);
    }
  }

  int C[m][c];

  for (int i=0; i<m; i++) {
    for (int j=0; j<c; j++) {
      C[i][j] = 0;
      for (int k=0; k<n; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  printf("The product of the given two matrices is: \n");
  for (int i=0; i<m; i++) {
    for (int j=0; j<c; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
