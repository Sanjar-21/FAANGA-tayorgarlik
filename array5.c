#include <stdio.h>

int s21_array(int array[], int lenght, int count);

int main(void) {
  int array[] = {12, 13, 313, 13, 12, 13, 13, 13, 12};
  int sanash = 0;
  int count = 13;
  int lenght = sizeof(array) / sizeof(array[0]);

  for (int i = 0; i < lenght; i++) {
    if (array[i] == count)
      sanash++;
  }
  printf("arrayda shuncha 13 qatnashgan: %d\n", sanash);
  // yozilgan funksiyani sinash uchun yozilyabdi bu yer
  int array1[] = {1, 2, 3, 4, 3, 3, 31, 2, 3};
  int jam = 9;
  int a = 3;
  int nums = s21_array(array1, jam, a);
  printf("Nums: %d\n", nums);
  return 0;
}

int s21_array(int array[], int lenght, int count) {
  int num = 0;
  for (int i = 0; i < lenght; i++) {
    if (array[i] == count) {
      num++;
    }
  }
  return num;
}
