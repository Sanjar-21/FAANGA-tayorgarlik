#include <stdio.h>

void remove_srtrnig(char *string, char r);

int main(void) {
  char s1[] = "AAaaaaaAAAaaaCCCAAkkaaaaUUaaaAAAA";
  printf("s1: %s\n", s1);
  remove_srtrnig(s1, 'a');
  printf("s1 after: %s\n", s1);
  return 0;
}
void remove_srtrnig(char *string, char r) {
  int pos = 0;

  while (string[pos] != '\0') {
    if (string[pos] == r) {
      int newpos = pos;
      while (string[newpos] != '\0') {
        string[newpos] = string[newpos + 1];
        newpos++;
      }
    } else
      pos++;
  }
}
/*******************************************************************************
 * YouTube Link: https://www.youtube.com/watch?v=OAMPGC032AQ
 *
 * C: stringdan kegan charakterni polib tashlash
 *
 * C: -->> 20.c
 ********************************************************************************/
