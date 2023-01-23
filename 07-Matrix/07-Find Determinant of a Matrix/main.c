#include <stdio.h>
#include <stdlib.h>

/* This program to find the determinant of a square matrix entered by user. */

int main() {
    int size;
    float ratio, determinant = 1;

    // Get the number of rows or columns of a square matrix
    printf("Enter the order of the matrix: ");
    scanf("%d", &size);

    // Declare the matrix
    float matrix[size][size];

    // Get the matrix elements
    printf("\nEnter the matrix elements:\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("matrix[%d][%d]: ", i+1, j+1);
            scanf("%f", &matrix[i][j]);
        }
    }

    // Applying Gauss Elimination to transform the matrix to upper triangular matrix
    for(int i = 0; i < size; i++) {
        if(matrix[i][i] == 0.0) {
            // Print the determinant of the matrix
            printf("\n\nThe determinant of the entered matrix is: 0.00");
            exit(0);
        }
        for(int j = i+1; j < size; j++) {
            ratio = matrix[j][i] / matrix[i][i];

            for(int k = 0; k < size; k++) {
                matrix[j][k] -= ratio * matrix[i][k];
            }
        }
    }

    // multiplying elements in principal diagonal elements
    for(int i = 0; i < size; i++) {
        determinant *= matrix[i][i];
    }

    // Print the determinant of the matrix
    printf("\n\nThe determinant of the entered matrix is: %0.2f", determinant);
    return 0;
}