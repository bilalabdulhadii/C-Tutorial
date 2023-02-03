#include <stdio.h>
#include <stdlib.h>

/*
 * 1. Add Two Matrices
 * 2. Subtract Two Matrices
 * 3. Multiply Matrix By a Constant
 * 4. Multiply Two Matrices
 * 5. Power Of a Matrix
 * 6. Determinant of a Matrix
 * 7. Transpose of a Matrix
 * 8. Check Symmetric Matrix
*/

void menu();
void sum();
void subtract();
void multiply_Constant();
void multiply();
void power();



int main() {
    int option;

    menu();
    scanf("%d", &option);
    if(option == 1) {

    }
    else
        exit(0);
    return 0;
}

void menu() {
    printf(">>> Main Menu:\n");
    printf(" 1. Add Two Matrices\n");
    printf(" 2. Subtract Two Matrices\n");
    printf(" 3. Multiply Matrix By a Constant\n");
    printf(" 4. Multiply Two Matrices\n");
    printf(" 5. Power Of a Matrix\n");
    printf(" 6. Determinant of a Matrix\n");
    printf(" 7. Transpose of a Matrix\n");
    printf(" 8. Check Symmetric Matrix\n");
    printf(" 9. Exit.\n>> Your option: ");
}

void sum() {

}