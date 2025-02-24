#include <stdio.h>
#include <string.h>

int main() {
  int c=0;
  char str[100];
  printf("Enter any word: ");
  fgets(str, sizeof(str), stdin);

  char vow[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

  int n=strlen(str);

  for (int i=0; i<10; i++) {
    for (int j=0; j<n; j++) {
      if (vow[i] == str[j]) {
        c++;
      }
    }
  }
  printf("Number of vowels in the word: %d\n", c);
  return 0;
}
