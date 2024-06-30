#include <stdio.h>
#include <stdlib.h>

void InsertValue(int* ar, int n, int pos, int value) {
  for (int i = n; i > pos; --i) {
    ar[i] = ar[i - 1]; 
  }

  ar[pos] = value;
}

int main() {
  int n;
  scanf("%d", &n);

  int* ar = malloc((n + 1) * sizeof(n));

  for (int i = 0; i < n; ++i) {
    scanf("%d", &ar[i]);
  }

  int pos;
  int value;

  printf("Enter pos: ");
  scanf("%d", &pos);

  printf("Enter value: ");
  scanf("%d", &value);

  InsertValue(ar, n, pos, value);

  for (int i = 0; i < n + 1; ++i) {
    printf("%d ", ar[i]);
  }
  putchar('\n');

  free(ar);
}