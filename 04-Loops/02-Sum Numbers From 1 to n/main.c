#include <stdio.h>

int main()
{
    int num, sum = 0;
    // Get N form user
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=1; i <= num; i++)
    {   // sum = sum + i; Add i with old sum then the value on the new sum
        sum += i;
    }
    // Print the result
    printf("\nThe sum of numbers from 1 to %d is: %d\n", num, sum);
}