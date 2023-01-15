#include <stdio.h>

int main() {
    int num;
    int term1, term2, next;
    // Get the number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    // Set the 1. and the 2. terms
    term1 = 0;
    term2 = 1;
    printf("Fibonacci numbers: %d, %d, ", term1, term2);

    for (int i = 3; i <= num; i++)
    {
        // The next term will be term1 + term2
        next = term1 + term2;
        printf("%d, ", next);
        term1 = term2;
        term2 = next;
    }
    return 0;
}
