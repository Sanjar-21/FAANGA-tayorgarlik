#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, 3, 1, 4, 5, 1, 6, 7, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                // shu yerdan boshlandi hammasi 
                for(int l = j; l < size; l++) {
                    arr[l] = arr[l+1];
                }
                size--;
                j--;
            }
        }
    }

    printf("Natija > ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return (0);
}