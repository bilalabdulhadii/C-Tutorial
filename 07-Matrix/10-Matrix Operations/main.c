#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

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

#define max_size 100
void menu();
void sum();
void subtract();
void scalar_multiply();
void multiply();
void power();
void determinant();
void transpose();
void symmetric();
void matrix_input(int matrix[][max_size], int row, int col);
void matrix_output(int matrix[][max_size], int row, int col);

int main() {
    int option;
    menu();
    scanf("%d", &option);
    switch (option) {
        case 1:
            sum();
            break;
        case 2:
            subtract();
            break;
        case 3:
            scalar_multiply();
            break;
        case 9:
            exit(0);
        default:
            printf("\nWrong entry ...");
    }
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
    int row, col;
    // Get the number of rows and columns of the matrix
    printf("\nEnter the row number: ");
    scanf("%d", &row);
    printf("Enter the column number: ");
    scanf("%d", &col);

    // Declare the matrices
    int matrix1[max_size][max_size], matrix2[max_size][max_size];

    // Get the first matrix elements
    printf("\nEnter the first matrix elements:\n");
    matrix_input(matrix1, row, col);

    // Get the second matrix elements
    printf("\nEnter the second matrix elements:\n");
    matrix_input(matrix2, row, col);

    // Print the first matrix
    printf("\nThe first matrix:\n");
    matrix_output(matrix1, row, col);

    // Print the second matrix
    printf("\nThe second matrix:\n");
    matrix_output(matrix2, row, col);

    // Print the sum matrix (result)
    printf("\nThe sum of matrix1 and matrix2 is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", matrix1[i][j] + matrix2[i][j]);
        printf("\n");
    }
}

void subtract() {
    int row, col;
    // Get the number of rows and columns of the matrix
    printf("\nEnter the row number: ");
    scanf("%d", &row);
    printf("Enter the column number: ");
    scanf("%d", &col);

    // Declare the matrices
    int matrix1[max_size][max_size], matrix2[max_size][max_size];

    // Get the first matrix elements
    printf("\nEnter the first matrix elements:\n");
    matrix_input(matrix1, row, col);

    // Get the second matrix elements
    printf("\nEnter the second matrix elements:\n");
    matrix_input(matrix2, row, col);

    // Print the first matrix
    printf("\nThe first matrix:\n");
    matrix_output(matrix1, row, col);

    // Print the second matrix
    printf("\nThe second matrix:\n");
    matrix_output(matrix2, row, col);

    // Print the subtract matrix (result)
    printf("\nThe subtract of matrix1 and matrix2 is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", matrix1[i][j] - matrix2[i][j]);
        printf("\n");
    }
}

void scalar_multiply() {
    int row, col, num;
    // Get the number of rows and columns of the matrix
    printf("\nEnter the row number: ");
    scanf("%d", &row);
    printf("Enter the column number: ");
    scanf("%d", &col);

    // get a number.
    printf("\nEnter a number to multiply with matrix: ");
    scanf("%d", &num);

    // Declare the matrix
    int matrix[max_size][max_size];

    // Get the matrix elements
    printf("\nEnter the matrix elements:\n");
    matrix_input(matrix, row, col);

    // Print the result matrix
    printf("\nThe matrix after multiplying by %d is:\n", num);
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) printf("%6d", matrix[i][j] * num);
        printf("\n");
    }
}

void matrix_input(int matrix[][max_size], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrix_output(int matrix[][max_size], int row, int col) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) printf ("%6d", matrix[i][j]);
        printf ("\n");
    }
}