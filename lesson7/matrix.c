#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int m;
  scanf("%d %d", &n, &m);

  int** matrix = malloc(n * sizeof(int*));
  for (int i = 0; i < n; ++i) {
    matrix[i] = malloc(m * sizeof(int));
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      printf("%d ", matrix[i][j]);
    }
    putchar('\n');
  }

  for (int i = 0; i < n; ++i) {
    free(matrix[i]);
  }
  free(matrix);
}