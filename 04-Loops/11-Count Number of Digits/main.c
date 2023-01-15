#include <stdio.h>

/* This program is to count digits of an integer number entered yb user. */
int main() {
  int num;
  int counter = 0;
  // Get an integer number
  printf("Enter a number: ");
  scanf("%d", &num);

    while (num != 0)
    {
        counter++;
        num /= 10;
    }
    // Print the result
  printf("The number of digits is: %d\n", counter);
    return 0;
}