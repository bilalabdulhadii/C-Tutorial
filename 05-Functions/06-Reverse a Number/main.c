#include <stdio.h>

/* This code is reverse digits of an integer number - entered by user - using function */

// Declare the function
int reverse(int num);

int main() {
  int num;

  // Get an integer number from user
  printf("Enter a number: ");
  scanf("%d", &num);

  // Git the result from reverse function and print it
  printf("Reversed number is: %d", reverse(num));
  return 0;
}

// Function to reverse a number
int reverse(int num)
{
    int remainder, reverse = 0;
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    return reverse;
}