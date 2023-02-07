#include <stdio.h>

/* This program to multiply a matrix - entered by user - by a scalar. */

int main() {
    int row, column, num;
    // Get the number of rows and columns of the matrix
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

    // get a number.
    printf("\nEnter a number to multiply with matrix: ");
    scanf("%d", &num);

    // Print the result matrix
    printf("\nThe matrix after multiplying by %d is:\n", num);
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) printf("%6d", matrix[i][j] * num);
        printf("\n");
    }
    return 0;
}
