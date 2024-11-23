#include <stdio.h>

void vector_add(float v1[], float v2[], float result[], int lenght);
// dot product example
//
//  v1 = (2, 5, 4)
//  v2 = (3, 2, 1)
//  r = (2 * 3) + (5 * 2) + (4 * 1) = 20 
//

/*******************************************************************************
*
* Program: Dot product
* 
* C buycha 17 
* masivnlarni bir ga qushish 
*
* YouTube Lesson: https://www.youtube.com/watch?v=cJybIb_JvuY 
*
*
*******************************************************************************/
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