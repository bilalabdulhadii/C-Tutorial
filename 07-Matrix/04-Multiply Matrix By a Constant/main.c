#include <stdio.h>

/* This program to multiply a matrix - entered by user - by a constant. */

int main() {
    int row, column, constant;

    // Get the number of rows and the columns of the matrix
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &row);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &column);

    // Declare the matrix
    int matrix[row][column];

    // Get the matrix elements
    printf("Enter the first matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("matrix[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // get the constant number.
    printf("\nEnter th constant: ");
    scanf("%d", &constant);

    // Print the result matrix
    printf("\nThe matrix after multiplying by %d is:\n", constant);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++) printf("%5d", matrix[i][j] * constant);
        printf("\n");
    }

}
