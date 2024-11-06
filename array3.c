#include <stdio.h>

int main(void) {
    int arr1[] = {1,2,3,7,4};
    int arr2[] = {1,2,3,7,4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int len=0;
    for(int i = 0; i < size1; i++) {
        if(arr1[i] == arr2[i]) {
            len++;
        }
    }
    if(size1==len) printf("True\n");
    else printf("False\n");
    return (0);
}