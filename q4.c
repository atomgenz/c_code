#include <stdio.h>

int main() {

  int i,fe = 1, cd = 3, max = 5, p;

  p = fe;

  while (i < 5) {
    printf("%d,",p);
    p += cd;
    i++;
  }

  return 0;
}