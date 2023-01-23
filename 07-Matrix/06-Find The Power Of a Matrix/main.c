#include <stdio.h>

/* This program to find the power of a square matrix entered by user. */

int main() {
    int power, size, sum;

    // Get the number of rows or columns of a square matrix
    printf("Enter the Order of the Matrix: ");
    scanf("%d", &size);
    printf("Enter the power of the matrix: ");
    scanf("%d", &power);

    // Declare the matrix
    int matrix[size][size], copy_matrix[size][size], power_matrix[size][size];

    // Get the matrix elements
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("matrix[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Produce a copy of the entered matrix
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) copy_matrix[i][j] = matrix[i][j];
    }

    // Find the power matrix
    while(power > 1) {
        // Multiplication Operation
        for(int i=0; i<size; i++) {
            for(int j=0; j<size; j++) {
                sum = 0;
                for(int u=0; u<size; u++) sum += matrix[i][u] * copy_matrix[u][j];
                power_matrix[i][j] = sum;
            }
        }

        for(int i=0; i<size; i++) {
            for(int j=0; j<size; j++) matrix[i][j] = power_matrix[i][j];
        }
        power--;
    }

    // Print the power matrix
    printf("\nThe power matrix:\n");
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) printf ("%6d", power_matrix[i][j]);
        printf ("\n");
    }
    return 0;
}
