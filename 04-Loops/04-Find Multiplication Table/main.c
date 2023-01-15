#include <stdio.h>

int main()
{
    int num;
    // Get a number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Add new line
    printf("\n");

    for(int i=1; i <= 10; i++)
    {
        // print the result of i*num, repeat this line until i = 10
        printf("%d * %-2d = %d\n", num, i, i*num);
    }
}