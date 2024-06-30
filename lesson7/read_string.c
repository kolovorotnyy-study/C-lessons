#include <string.h>
#include <stdio.h>

int main() {
  char str1[16];

  if (scanf("%15s", str1) == 1) {
    printf("%s\n", str1);
  } else {
    printf("Invalid input\n");
  }

  char str2[128];

  scanf("%127[^\n]", str2);
  printf("%s\n", str2);
}