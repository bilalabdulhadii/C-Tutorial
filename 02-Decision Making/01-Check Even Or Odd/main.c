#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    // get a number from the user
    scanf("%d", &num);

    // If num is exactly divisible by 2,
    // So the num is even
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    return 0;
}
