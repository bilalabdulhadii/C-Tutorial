#include <stdio.h>

/* This program to multiply two matrices entered by user. */

int main() {
    int r1, r2, c1, c2;
    int sum;

    // Get the number of rows and columns from the user
    printf("Enter the number of rows in the 1. matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns in the 1. matrix: ");
    scanf("%d", &c1);
    printf("Enter the number of rows in the 2. matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns in the 2. matrix: ");
    scanf("%d", &c2);

    // Declare the matrices
    int matrix1[r1][c1], matrix2[r2][c2], matrix3[r1][c2];
    if(c1 == r2)
    {
        // Get the first matrix elements
        printf("\n\nEnter 1. matrix elements:\n");
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c1; j++) {
                printf("matrix1[%d][%d] : ", i+1, j+1);
                scanf("%d", &matrix1[i][j]);
            }
        }

        // Get the second matrix elements
        printf("\n\nEnter 2. matrix elements:\n");
        for(int i=0; i<r2; i++) {
            for(int j=0; j<c2; j++) {
                printf("matrix2[%d][%d] : ", i+1, j+1);
                scanf("%d", &matrix2[i][j]);
            }
        }

        // Print the first matrix
        printf("\n>> Matrix1:\n");
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c1; j++) printf("%6d", matrix1[i][j]);
            printf("\n");
        }

        // print the second matrix
        printf("\n>> Matrix2:\n");
        for(int i=0; i<r2; i++) {
            for(int j=0; j<c2; j++) printf("%6d", matrix2[i][j]);
            printf("\n");
        }

        // Find the third Matrix.
        for(int u=0; u<r1; u++) {
            for(int i=0; i<c2; i++) {
                sum = 0;
                for(int j=0; j<c1; j++) sum += ( matrix1[u][j] * matrix2[j][i] );
                matrix3[u][i] = sum;
            }
        }

        // print the third matrix
        printf("\nThe multiplication of matrix1 and matrix2 is:\n");
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++) printf("%6d", matrix3[i][j]);
            printf("\n");
        }
    }

    // If the number of columns of the 1. matrix does not equal to the number of rows of the 2. matrix (c1 != r2)
    else printf("\nWrong entry,\nThe number of the columns of the first matrix must be equal to the rows of the second matrix.\n");
    return 0;
}
