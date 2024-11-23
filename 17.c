#include <stdio.h>

void vector_add(float v1[], float v2[], float result[], int lenght);

int main(void) {

  float v1[] = {2, 5, 4};
  float v2[] = {3, 1, 9};
  float result[] = {0, 0, 0};

  vector_add(v1, v2, result, 3);

  for (int i = 0; i < 3; i++)
    printf("resoult[%d] = %f\n", i, result[i]);

  return 0;
}

void vector_add(float v1[], float v2[], float result[], int lenght) {
  for (int i = 0; i < lenght; i++) {
    result[i] = v1[i] + v2[i];
  }
}