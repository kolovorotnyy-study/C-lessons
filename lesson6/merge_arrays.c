#include <stdio.h>
#include <stdlib.h>

void MergeArrays(int* ar1, int n1, int* ar2, int n2, int* result) {
  int index1 = 0;
  int index2 = 0;

  int result_index = 0;

  while (index1 < n1 && index2 < n2) {
    if (ar1[index1] < ar2[index2]) {
      result[result_index] = ar1[index1];
      ++result_index;

      ++index1;
    } else {
      result[result_index] = ar2[index2];
      ++result_index;

      ++index2;
    }
  }

  while (index1 < n1) {
    result[result_index] = ar1[index1];
    ++result_index;
    ++index1;
  }

  while (index2 < n2) {
    result[result_index] = ar2[index2];
    ++result_index;
    ++index2;
  }
}

int main() {
  // 1 1 10 12 55 66 77 88 (n1)
  // 1 1 3 11 45 '(n2)

  // 1 1 1 1

  // 1 1 2 3 5 10 11 12 45 55 (n1 + n2)

  // 1 1 2 3 5 ...

  int n1;
  scanf("%d", &n1);

  int* ar1 = malloc(n1 * sizeof(int)); 

  for (int i = 0; i < n1; ++i) {
    scanf("%d", &ar1[i]);
  }

  int n2;
  scanf("%d", &n2);

  int* ar2 = malloc(n2 * sizeof(int)); 

  for (int i = 0; i < n2; ++i) {
    scanf("%d", &ar2[i]);
  }

  int* result = malloc((n1 + n2) * sizeof(int));

  MergeArrays(ar1, n1, ar2, n2, result);

  for (int i = 0; i < n1 + n2; ++i) {
    printf("%d ", result[i]);
  }
  putchar('\n');

  free(ar1);
  free(ar2);
  free(result);
}