#include <stdio.h>
#include <stdlib.h>

void ReverseArray(int* ar, int n) {
  for (int i = 0; i < n / 2; ++i) {
    int tmp = ar[i];
    ar[i] = ar[n - i - 1];
    ar[n - i - 1] = tmp;
  }
}

int main() {
  int n;
  scanf("%d", &n);

  int* ar = malloc(n * sizeof(int));

  for (int i = 0; i < n; ++i) {
    scanf("%d", &ar[i]);
  }

  ReverseArray(ar, n);

  for (int i = 0; i < n; ++i) {
    printf("%d ", ar[i]);
  }
  putchar('\n');

  free(ar);
}