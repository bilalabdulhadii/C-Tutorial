#include <stdio.h>

int main() {
    int *number_ptr;
    int number = 10;

    number_ptr = &number;

    printf("Address of number : %d\n", &number);
    printf("Address of number ptr : %d\n", &number_ptr);

    printf("\n----------------------------------\n");
    printf("Value of number : %d\n", number);
    printf("Value of number ptr : %d\n", number_ptr);

    printf("\n----------------------------------\n");
    printf("Value pointed by number ptr = %d\n", *number_ptr);
    return 0;
}
