#include <stdio.h>

int find_max(int array[], int lenght);

int main(void) {
    int array[] = {13,14,15,16,18,111,1043,1413};
    int lenght = sizeof(array) / sizeof(array[0]);
    int max = array[0];

    for(int i = 0; i < lenght; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    printf("max: %d\n", max);
    // yozilgan finksiya ishlatib kurish 
    int array1[] = {
        234,1314,145,1354,12,41,536
    };
    int num = find_max(array1, 7);
    printf("max: %d\n", num);
    return 0;
}

int find_max(int array[], int lenght) {
    int fin_max = array[0];
    for(int i = 0; i < lenght; i++) {
        if(array[i] > fin_max) {
            fin_max = array[i];
        }
    }
    return fin_max;
}