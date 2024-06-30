#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hello World!";
  char str2[] = {'a', 'b', '\0'};

  int n1 = strlen(str1);

  for (int i = 0; i < n1; ++i) {
    printf("%c\n", str1[i]);
  }

  for (char* c = str1; *c != '\0'; ++c) {
      printf("%c\n", *c);
  }

  
}