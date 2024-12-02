#include <stdio.h>
#include <string.h>
// Dars 21
// 01101 larni 10 lik sanoq tizimiga utakazish

int convert(char *sss);

int main(void) {
  char a1[] = "10101";
  printf("a1: %d\n", convert(a1));

  return 0;
}
int convert(char *sss) {
  int slen = strlen(sss); // sss ni uzinligini beradi
  int total = 0;
  int decval = 1;

  for (int i = (slen - 1); i >= 0; i--) {
    if (sss[i] == '1') {
      total = total + decval;
    }
    printf("decval: %d\n", decval);
    decval = decval * 2;
  }
  return total;
}
