#include <stdio.h>

/* This program to sum two matrices entered by user. */

int main() {
    int row, col;
    // Get the number of rows and columns of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    // Declare the matrices
    int matrix1[row][col], matrix2[row][col], sum_matrix[row][col];

    // Get the first matrix elements
    printf("\nEnter the first matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("matrix1[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Get the second matrix elements
    printf("\nEnter the second matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("matrix2[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Print the first matrix
    printf("\nThe first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", matrix1[i][j]);
        printf ("\n");
    }

    // Print the second matrix
    printf("\nThe second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", matrix2[i][j]);
        printf ("\n");
    }

    // Find the addition of matrix1 and matrix2
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum matrix (result)
    printf("\nThe sum of matrix1 and matrix2 is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", sum_matrix[i][j]);
        printf ("\n");
    }
    return 0;
}