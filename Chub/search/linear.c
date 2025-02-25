//linear search
#include <stdio.h>

void line(int A[], int n, int key);

int main() {
  int A[] = {1, 4, 2, 25, 46, 99, 55, 0, 3, 19};
  int n = sizeof(A) / sizeof(A[0]);

  int key;
  printf("Enter the value to be searched: ");
  scanf("%d", &key);

  line(A, n, key);

  return 0;
}

void line(int A[], int n, int key) {
  int s;
  for (int i=0; i<n; i++) {
    if (A[i]==key) {
      printf("Element found at index %d\n", i);
      s = 1;
    }
  }
  if (s==0) {
    printf("Element not found\n");
  }
}
