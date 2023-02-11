#include <stdio.h>

/* This program to print the elements of a matrix entered by user. */

int main() {
    int row, col;
    // Get the number of rows and columns of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    // Declare the matrix
    int matrix[row][col];

    // Get the matrix elements
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("matrix[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nThe matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", matrix[i][j]);
        printf ("\n");
    }
    return 0;
}