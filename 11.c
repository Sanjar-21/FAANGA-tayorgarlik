#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[15] = "Hello";
    char s2[16] = "World!";

    strcpy(s1, s2);
    printf("s1: %s\n", s1);
    return 0;
}