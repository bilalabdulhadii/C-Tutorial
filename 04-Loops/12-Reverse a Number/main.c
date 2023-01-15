#include <stdio.h>

/* This code is reverse digits of an integer number entered by user. */
int main() {
  int num, reverse = 0, remaind;

  // Get an integer number from user
  printf("Enter a number: ");
  scanf("%d", &num);

  while (num != 0) {
    remaind = num % 10;
    reverse = reverse * 10 + remaind;
    num /= 10;
  }

  printf("Reversed number is: %d", reverse);
  return 0;
}