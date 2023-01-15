#include <stdio.h>

int main()
{
    int num;
    // Get a number form user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Set a counter as one; Condition; Increment the counter
    for(int i=1; i <= num; i++)
    {   // Print i and to new line
        printf("%d\n", i);
    }
    return 0;
}
