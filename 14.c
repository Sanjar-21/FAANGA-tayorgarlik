#include  <stdio.h>
#include <stdlib.h>

/*
YouTube Lesson: https://www.youtube.com/watch?v=aCR3SlfZTwg
YouTube 14.c 
copy masivni
*/

int *arry_copy(int *array, int lenght);

int main(void) {
    // int a[5] = {1,2,3,4,5};
    // int copy[5];
    // for(int i = 0; i < 5; i++) copy[i] = a[i];

    // for(int i = 0; i < 5; i++) printf("copy[%d] = %d\n", i, copy[i] );
    // alohida funksiya uchun yozladi 
    int a1[] = {1,2,3,4,5};
    int a2[] = {12,23,34,345,45,646,42};
    int *a1_copy = arry_copy(a1, 5);
    int *a2_copy = arry_copy(a2, 4);

    for(int i = 0; i < 5; i++) printf("a1_copy[%d]=%d\n", i, a1_copy[i]);
    printf("\n");
    for(int i = 0; i < 4; i++) printf("a2_copy[%d]=%d\n", i, a2_copy[i]);

    return 0;
}

int *arry_copy(int *array, int lenght) {
    int *c = malloc(lenght * sizeof(int));

    for(int i = 0; i < lenght; i++) c[i] = array[i];

    return c;
}