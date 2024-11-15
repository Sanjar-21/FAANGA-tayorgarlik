// fibanachi mashq

#include <stdio.h>


int main(void) {
    int term1 = 0;
    int term2 = 1;
    int fibn = 0;
    int lenght = 0;

    do {
        printf("Enter lenght : ");
        scanf("%d", &lenght);

        if(lenght < 3) {
            printf("Lenght >= 3 \n");
        }
    } while(lenght < 3);

    printf("Termlarlarni soni chiqaramiz\n");
    printf("%d,%d", term1, term2);

    for(int i = 2; i < lenght; i++) {
        fibn = term1 + term2;
        printf("fibn : %d", fibn);

        term1 = term2;
        term2 = fibn;

        if(i != (lenght - 1)) printf(",");
    }

    return 0;
}