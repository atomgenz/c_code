#include <stdio.h>

int main() {

  int n, reverse = 0, remainder, t;

  printf("Enter an integer: ");
  scanf("%d", &n);

  t = n;

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if (t == reverse) printf("%d is palindrome\n", t);
  else printf("%d is not palindrome\n", t);

  return 0;
}