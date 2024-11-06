#include <stdio.h>

int main() {

  int array[] = {9, 3, 6, 1, 4, 5, 7};
  int a = sizeof(array) / sizeof(array[0]);
  int max = 0;
  int max2 = 0;
  for (size_t i = 0; i < a; i++) {
    if (array[i] > max) {
      max2 = max;
      max = array[i];
    }
    if (array[i] > max2 && array[i] < max) {
      max2 = array[i];
    }
  }
  printf("%d\n", max2);
  return 0;
}