#include <stdio.h>

void teskari(int num);

int main(void) {
  int a;
  a = 103;
  teskari(a);
  return (0);
}

void teskari(int num) {
  if (num == 0) {
    printf(0);
    return;
  }

  while (num != 0) {
    int digit = num % 10;
    printf("%d", digit);
    num /= 10;
  }
  printf("\n");
}
