#include <stdio.h>

/* This program to check a matrix entered by user if it symmetric or not. */

int main() {
    int row, col, flag = 1;
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

    // Check if the matrix is symmetric or not
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1) {
        printf("\nThis matrix is a Symmetric matrix.\n");
    }
    else {
        printf("\nThis matrix is not a Symmetric matrix.\n");
    }
}
