#include <stdio.h>

int main(void) {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(array) / sizeof(array[0]);
  // for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
  //     printf("%2d", array[i]);
  // }
  int left = 0;
  int right = size - 1;

  while (left < right) {
    int temp = array[left];
    array[left] = array[right];
    array[right] = temp;
    left += 1;
    right -= 1;
  }
  for (int i = 0; i < size; i++) {
    printf("%2d", array[i]);
  }
  return (0);
}