#include <stdio.h>

/* This program to print the elements of a matrix entered by user. */

int main() {
    int row, column;
    // Get the number of rows and the columns of the matrix
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &row);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &column);

    // Declare the matrix
    int matrix[row][column];

    // Get the matrix elements
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("matrix[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nThe matrix:\n");
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) printf ("%6d", matrix[i][j]);
        printf ("\n");
    }
    return 0;
}