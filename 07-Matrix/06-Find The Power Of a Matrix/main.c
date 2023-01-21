#include <stdio.h>

/* This program to find the power of a matrix entered by user. */

int main()
{
    int power, num, sum;
    // Get the number of rows or columns of a square matrix
    printf("\nEnter the number of Rows or columns of a square matrix: ");
    scanf("%d", &num);
    printf("Enter the power of the matrix: ");
    scanf("%d", &power);

    // Declare the matrices
    int matrix[num][num], copy_matrix[num][num], power_matrix[num][num];

    // Get the matrix elements
    printf("Enter the first matrix elements:\n");
    for(int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("matrix[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Produce a copy of the entered matrix
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num; j++) copy_matrix[i][j] = matrix[i][j];
    }

    // Find the power matrix
    while(power > 1)
    {
        // Multiplication Operation
        for(int i=0; i<num; i++)
        {
            for(int j=0; j<num; j++)
            {
                sum = 0;
                for(int u=0; u<num; u++) sum += matrix[i][u] * copy_matrix[u][j];
                power_matrix[i][j] = sum;
            }
        }

        for(int i=0; i<num; i++)
        {
            for(int j=0; j<num; j++) matrix[i][j] = power_matrix[i][j];
        }
        power--;
    }

    // Print the power matrix
    printf("\nThe power matrix:\n");
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num; j++) printf ("%6d", power_matrix[i][j]);
        printf ("\n");
    }
    return 0;
}
