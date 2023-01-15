#include <stdio.h>

int main()
{
    int num, sum = 0;
    // Get N form user
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=1; i <= num; i++)
    {
        // Just the even values can enter if section
        if(i%2 == 0)
        {
            // Sum all the even values
            sum += i;
        }
    }
    printf("\nThe sum of the even numbers from 1 to %d is: %d\n", num, sum);
}