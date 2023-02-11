#include <stdio.h>

/* This program to find the transpose of a matrix entered by user. */

int main() {
    int row, column, k = 0;

    // Get the number of rows and columns of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    // Declare the matrix
    int matrix[row][column], transpose[column][row], array[row * column];

    // Get the matrix elements
    printf("\nEnter the matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("matrix[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // We will first convert the matrix to array,
    // then use this array to find the transpose

    // Convert matrix to array
    for(int i = 0; i < column; i++) {
        for(int j = 0; j < row; j++, k++) {
            array[k] = matrix[j][i];
        }
    }

    // Find the transpose
    k = 0;
    for(int i = 0; i < column; i++) {
        for(int j = 0; j < row; j++, k++) {
            transpose[i][j] = array[k];
        }
    }

    // Print the matrices
    printf("\nThe matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) printf("%6d", matrix[i][j]);
        printf("\n");
    }

    printf("\nThe transpose:\n");
    for(int i = 0; i < column; i++) {
        for(int j = 0; j < row; j++) printf("%6d", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
