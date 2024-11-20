#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*
 * YouTube Lesson: https://www.youtube.com/watch?v=rso22UR1b2I
 * Description: Flips lowercase characters to uppercase and uppercase characters
 * to lowercase in a C string.
*/
// katta hariflarni kichiga va kichigni mayda hariflarga aylantrish

int main(void) {
  char s[] = "abcdefABCDE";
  int lenght = strlen(s);

  for (int i = 0; i < lenght; i++) {
    if (isupper(s[i])) {
      s[i] = tolower(s[i]);
    } else if (islower(s[i])) {
      s[i] = toupper(s[i]);
    }
  }

  puts(s);
}