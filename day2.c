#include <stdio.h>

int find_min(int array[], int uzn);

int main(void) {
    int myarray[] = {12, 14,6,3,7,9,1,10};
    int min = myarray[0];
    int len = sizeof(myarray) / sizeof(myarray[0]);

    for(int i = 0; i < len; i++) {
        if(myarray[i] < min) {
            min = myarray[i];
        }
    }
    printf("Min: %d\n", min);

    //yozilgan funkdiya uchun min ishlatish
    int myarray2[] = {23,536,2,6,9,4,11};
    int resolt = find_min(myarray2, 7);
    printf("find_min: %d\n", resolt);
    return 0;
}

int find_min(int array[], int uzn) {
    int min = array[0];
    for(int i = 0; i < uzn; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    return min;
}