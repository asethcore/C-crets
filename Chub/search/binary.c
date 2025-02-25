//binary search
#include <stdio.h>

void sort(int A[], int n);
int search(int A[], int n, int key);

int main() {
  int A[] = {1, 4, 2, 25, 46, 99, 55, 0, 3, 19};
  int n = sizeof(A) / sizeof(A[0]);

  int key;
  printf("Enter the value to be searched: ");
  scanf("%d", &key);

  sort(A, n);
  int result = search(A, n, key);

  if (result != -1) {
    printf("Element found at index %d\n", result);
  } else {
    printf("Element not found\n");
  }

  return 0;
}

void sort(int A[], int n) {
  int m, t;
  for (int i=0; i<n-1; i++) {
    m = i;
    for (int j=i+1; j<n; j++) {
      if (A[j]<A[m]) {
        m=j;
      }
    }
    if (m!=i) {
      t=A[i];
      A[i]=A[m];
      A[m]=t;
    }
  }
}

int search(int A[], int n, int key) {
  int low=0, high=n-1;

  while (low<=high) {
    int mid=(low+high)/2;

    if (A[mid]==key) {
      return mid;
    }
    else if (A[mid]<key) {
      low=mid+1;
    } else {
      high=mid-1;
    }
  }
  return -1;
}
