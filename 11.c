#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[20] = "Hello ";
    char s2[6] = "World!";

    strcat(s1, s2);
    printf("s1: %s\n", s1);
    return 0;
}