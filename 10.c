#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[] = "My nem's is Sanjar";

  int count = 0;

  for (int i = 0; i < strlen(s1); i++) {
    switch (toupper(s1[i])) {
    case 'A':
    case 'B':
    case 'D':
    case 'O':
    case 'L':
      count++;
    }
  }

  printf("count : %d\n", count);
  return 0;
}
// YouTube dasrlik 10 ?
// YouTube Lesson: https://www.youtube.com/watch?v=heJ56FVFrZ4
// masivdan shunga kegan sonlarni aniqlash
