#include <stdio.h>
#include <string.h>
/****************************
    Char masivni tartiblash:
    = --- >> C
****************************/
void sort_char_masiv(char arr[], int size);

int main(void) {
    char a1[] = "sdfjaasdfkjsdf";
    int lenght = strlen(a1);
    sort_char_masiv(a1, lenght);
    printf("a1: %s\n", a1);
    return 0;
}

void sort_char_masiv(char arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}