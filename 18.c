#include <stdio.h>


float dot_product(float v1[], float v2[], int lenght) ;

int main(void) {
    float v1[] = {2,5,4};
    float v2[] = {3,2,1};
    float result = dot_product(v1, v2, 3);

    printf("Result %f\n", result);

    return 0;
}

float dot_product(float v1[], float v2[], int lenght) {
    int sum = 0;

    for(int i = 0; i < lenght; i++) sum += v1[i] + v2[i];

    return sum;
}