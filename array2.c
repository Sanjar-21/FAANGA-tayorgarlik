#include <stdio.h>

int main(void) {
  int array[] = {11, 11, 11, 11, 1, 1, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(array) / sizeof(array[0]);
  int new_array[size];

  for (int i = 0; i < size; i++) {
    new_array[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (array[i] == array[j]) {
        new_array[i]++;
      }
    }
  }
  int arr[size];
  int arr_soni = 0;
  for (int i = 0; i < size; i++) {
    if (new_array[i] == 1) {
      arr[arr_soni++] = array[i];
    }
  }
  for (int i = 0; i < arr_soni; i++) {
    printf("arr[%d] > %d\n", i, arr[i]);
  }
  return 0;
}