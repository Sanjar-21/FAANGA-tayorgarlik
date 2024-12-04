#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define B_SIZE 5

int main(void) {
    int ar1[B_SIZE];

    for(int i = 0; i < B_SIZE; i++) {
        printf("Enter: ");
        scanf("%d", &ar1[i]);
    }

    int total = 0;
    for(int i = 0; i < B_SIZE; i++) {
        printf("ar1[%d] = %d\n", i, ar1[i]);
        total = total + ar1[i];
    }
    printf("SUNG: %d\n", total / B_SIZE );

    // yangi qator
    int size = 2;
    int *buffor = malloc(sizeof(int) * size);

    

    free(buffor);

    return 0;
}