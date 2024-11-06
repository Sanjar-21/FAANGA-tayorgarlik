#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int arr[] = {6, 25, 91, 23, 72, 9, 18, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 23;
    bool jam = false;

    for(int i = 0; i < size; i++) {
        if(arr[i] == n) {
            jam = true;
            break;
        }
    }
    printf("%d\n", jam);
    return 0;
}
