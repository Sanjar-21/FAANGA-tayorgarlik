#include <stdio.h>
// 6 darlik double arrni yig'nsisini topish
int main(void) {
    double arr[] = {12.1,12.1,12.1};
    int size = sizeof(arr) / sizeof(double);

    double sum = 0;
    for(int i = 0; i < size; i ++) {
        sum = sum + arr[i];
        printf("arr[%d] = %.2lf  sum=%.2lf\n", i, arr[i], sum);
    }
    return 0;
}