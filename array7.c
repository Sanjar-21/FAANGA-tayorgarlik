#include <stdio.h>

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(int);

  int temp = 0;

  for (int i = 0; i < size / 2; i++) {
    temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temp;
  }
  for (int i = 0; i < size; i++) {
    printf("array[%d] - %d\n", i, arr[i]);
  }
  return 0;
}
// masivni teskarisga qilib tahlash
