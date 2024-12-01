#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Palindrom so'zni aniqlash

int main(void) {
  char string[] = "asdfdsajk";
  int middle = strlen(string) / 2;
  int len = strlen(string);

  printf("middle: %d\n", middle);
  for (int i = 0; i < middle; i++) {
      if (string[i] != string[len - i - 1]) {
      printf("So'z palindrom emas.\n");
      return 12; // Bir xil bo'lmagan harflar topildi
    }
  }
  printf("So'z palindrom.\n");
  return 0; // Agar barcha harflar teng bo'lsa
}
