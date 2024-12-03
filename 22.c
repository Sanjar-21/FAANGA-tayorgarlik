#include <stdio.h>
#include <string.h>
// C //
// char dagi suzlarni bironta belgiga almashtirish //
// YouTube //

void almashtiramiz(char *string, char replase, char new);

int main(void) {
  char a1[] = "asdfasdfadfasdfasdfsdfsdfsdfsas";
  almashtiramiz(a1, 'f', ' ');
  printf("a1: %s\n", a1);

  char a2[] = "asdfasdfadfasdfasdfsdfsdfsdfsas";
  almashtiramiz(a2, 'f', 'A');
  printf("a2: %s\n", a2);

  char a3[] = "asdfasdfadfasdfasdfsdfsdfsdfsas";
  almashtiramiz(a3, 'f', '-');
  printf("a3: %s\n", a3);

  return 0;
}

void almashtiramiz(char *string, char replase, char new) {
  int slen = strlen(string);

  for (int i = 0; i < slen; i++) {

    if (string[i] == replase) {
      string[i] = new;
    }
  }
}