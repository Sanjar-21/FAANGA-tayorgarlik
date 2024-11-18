#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

/*
YouTube: https://www.youtube.com/watch?v=_7GPPMQvO84
YouTube 11 vido strcat
*/


char *string_append(char *s1, char *s2);

int main(void) {
    char s1[20] = "Hello ";
    char s2[7] = "World!";  // Harflar va null terminator uchun joy ajratildi

    strcat(s1, s2);
    printf("s1: %s\n", s1);

    char a[] = "abs";
    char b[] = "dfh";

    char *s = string_append(a, b);
    printf("s: %s\n", s);
    free(s);  // Dinamik xotirani tozalash
    return 0;
}

char *string_append(char *s1, char *s2) {
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int size = s1_length + s2_length + 1;  // Harflar + '\0'

    char *s = calloc(size, sizeof(char)); // Xotira ajratish
    if (!s) {
        perror("Xotira ajratishda xatolik");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < s1_length; i++) {
        s[i] = s1[i];  // Birinchi qatorni nusxalash
    }

    for (int i = 0; i < s2_length; i++) {
        s[s1_length + i] = s2[i];  // Ikkinchi qatorni ulash
    }

    s[size - 1] = '\0';  // Null terminator qo'shish
    return s;
}
