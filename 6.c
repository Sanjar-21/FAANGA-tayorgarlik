#include <stdio.h>
// 6 darlik double arrni yig'nsisini topish

double masivni_hajmi(double arr[], int lenght);


int main(void) {
    // double arr[] = {12.1,12.1,12.1};
    // int size = sizeof(arr) / sizeof(double);

    // double sum = 0;
    // for(int i = 0; i < size; i ++) {
    //     sum = sum + arr[i];
    //     printf("arr[%d] = %.2lf  sum=%.2lf\n", i, arr[i], sum);
    // } 
    double num[] = {12.1,12.1,12.1};
    int a = 3;
    masivni_hajmi(num, a);
    return 0;
}

double masivni_hajmi(double arr[], int lenght) {
    double yigindi = 0;
    for(int i = 0; i < lenght; i++ ) {
        yigindi = yigindi + arr[i];
        printf("arr[%d] = %.2lf, yigindi=%.2lf\n", i, arr[i], yigindi);
    }

}