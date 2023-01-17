#include <stdio.h>

/* This program to subtract two matrices entered by user. */

int main() {
    int row, column;
    // Get the number of rows and the columns of the matrix
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &row);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &column);

    // Declare the matrices
    int matrix1[row][column], matrix2[row][column], matrix3[row][column];

    // Get the first matrix elements
    printf("Enter the first matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("matrix1[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n");
    // Get the second matrix elements
    printf("Enter the second matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("matrix2[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Print the first matrix
    printf("\nThe first matrix:\n");
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) printf ("%6d", matrix1[i][j]);
        printf ("\n");
    }

    // Print the second matrix
    printf("\nThe second matrix:\n");
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) printf ("%6d", matrix2[i][j]);
        printf ("\n");
    }

    // Find the subtraction of matrix1 and matrix2
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Print the third matrix (result)
    printf("\n>>> The sub of matrix1 and matrix2 is:\n");
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) printf ("%6d", matrix3[i][j]);
        printf ("\n");
    }
    return 0;
}