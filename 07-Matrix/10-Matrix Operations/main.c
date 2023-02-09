#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

#define max_size 100

/*
 * 1. Add Two Matrices
 * 2. Subtract Two Matrices
 * 3. Multiply Matrix By a Constant
 * 4. Multiply Two Matrices
 * 5. Power Of a Matrix
 * 6. Determinant of a Matrix
 * 7. Transpose of a Matrix
 * 8. Check Symmetric Matrix
*/

void menu();
void sum();
void subtract();
void scalar_multiply();
void multiply();
void power();
void determinant();
void transpose();
void symmetric();
void matrix_input(int matrix[][max_size], int row, int col);
void matrix_output(int matrix[][max_size], int row, int col);

int main() {
    int option;
    menu();
    scanf("%d", &option);
    switch (option) {
        case 1:
            sum();
            break;
        case 2:
            subtract();
            break;
        case 3:
            scalar_multiply();
            break;
        case 4:
            multiply();
            break;
        case 5:
            power();
            break;
        case 6:
            determinant();
            break;
        case 7:
            transpose();
            break;
        case 8:
            symmetric();
            break;
        case 9:
            exit(0);
        default:
            printf("\nWrong entry ...");
    }
    return 0;
}

void menu() {
    printf(">>> Main Menu:\n");
    printf(" 1. Add Two Matrices\n");
    printf(" 2. Subtract Two Matrices\n");
    printf(" 3. Multiply Matrix By a Constant\n");
    printf(" 4. Multiply Two Matrices\n");
    printf(" 5. Power Of a Matrix\n");
    printf(" 6. Determinant of a Matrix\n");
    printf(" 7. Transpose of a Matrix\n");
    printf(" 8. Check Symmetric Matrix\n");
    printf(" 9. Exit.\n>> Your option: ");
}

void sum() {
    int row, col;
    // Get the number of rows and columns of the matrix
    printf("\nEnter the row number: ");
    scanf("%d", &row);
    printf("Enter the column number: ");
    scanf("%d", &col);

    // Declare the matrices
    int matrix1[max_size][max_size], matrix2[max_size][max_size];

    // Get the first matrix elements
    printf("\nEnter the first matrix elements:\n");
    matrix_input(matrix1, row, col);

    // Get the second matrix elements
    printf("\nEnter the second matrix elements:\n");
    matrix_input(matrix2, row, col);

    // Print the first matrix
    printf("\nThe first matrix:\n");
    matrix_output(matrix1, row, col);

    // Print the second matrix
    printf("\nThe second matrix:\n");
    matrix_output(matrix2, row, col);

    // Print the sum matrix (result)
    printf("\nThe sum of matrix1 and matrix2 is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", matrix1[i][j] + matrix2[i][j]);
        printf("\n");
    }
}

void subtract() {
    int row, col;
    // Get the number of rows and columns of the matrix
    printf("\nEnter the row number: ");
    scanf("%d", &row);
    printf("Enter the column number: ");
    scanf("%d", &col);

    // Declare the matrices
    int matrix1[max_size][max_size], matrix2[max_size][max_size];

    // Get the first matrix elements
    printf("\nEnter the first matrix elements:\n");
    matrix_input(matrix1, row, col);

    // Get the second matrix elements
    printf("\nEnter the second matrix elements:\n");
    matrix_input(matrix2, row, col);

    // Print the first matrix
    printf("\nThe first matrix:\n");
    matrix_output(matrix1, row, col);

    // Print the second matrix
    printf("\nThe second matrix:\n");
    matrix_output(matrix2, row, col);

    // Print the subtract matrix (result)
    printf("\nThe subtract of matrix1 and matrix2 is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", matrix1[i][j] - matrix2[i][j]);
        printf("\n");
    }
}

void scalar_multiply() {
    int row, col, num;
    // Get the number of rows and columns of the matrix
    printf("\nEnter the row number: ");
    scanf("%d", &row);
    printf("Enter the column number: ");
    scanf("%d", &col);

    // get a number.
    printf("\nEnter a number to multiply with matrix: ");
    scanf("%d", &num);

    // Declare the matrix
    int matrix[max_size][max_size];

    // Get the matrix elements
    printf("\nEnter the matrix elements:\n");
    matrix_input(matrix, row, col);

    // Print the result matrix
    printf("\nThe matrix after multiplying by %d is:\n", num);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) printf("%6d", matrix[i][j] * num);
        printf("\n");
    }
}

void multiply() {
    int row1, row2, col1, col2;
    int sum;

    // Get the number of rows and columns from the user
    printf("\nEnter the number of rows in the 1. matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns in the 1. matrix: ");
    scanf("%d", &col1);
    printf("Enter the number of rows in the 2. matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns in the 2. matrix: ");
    scanf("%d", &col2);

    // Declare the matrices
    int matrix1[max_size][max_size], matrix2[max_size][max_size], mul_matrix[max_size][max_size];

    if(col1 == row2) {
        // Get the first matrix elements
        printf("\nEnter 1. matrix elements:\n");
        matrix_input(matrix1, row1, col1);

        // Get the second matrix elements
        printf("\nEnter 2. matrix elements:\n");
        matrix_input(matrix2, row2, col2);

        // Print the first matrix
        printf("\n>> Matrix1:\n");
        matrix_output(matrix1, row1, col1);

        // print the second matrix
        printf("\n>> Matrix2:\n");
        matrix_output(matrix2, row2, col2);

        // Find the multiplication
        for(int u = 0; u < row1; u++) {
            for(int i = 0; i < col2; i++) {
                sum = 0;
                for(int j = 0; j < col1; j++) sum += (matrix1[u][j] * matrix2[j][i]);
                mul_matrix[u][i] = sum;
            }
        }

        // Print the multiplied matrix
        printf("\nThe multiplication of matrix1 and matrix2 is:\n");
        matrix_output(mul_matrix, row1, col2);
    }

    // If the number of columns of the 1. matrix does not equal to the number of rows of the 2. matrix (col1 != row2)
    else printf("\nWrong entry,\nThe number of the columns of the first matrix must be equal to the rows of the second matrix.\n");
}

void power() {
    int power, order, sum;
    // Get the number of rows or columns of a square matrix
    printf("\nEnter the order of the Matrix: ");
    scanf("%d", &order);
    printf("Enter the power of the matrix: ");
    scanf("%d", &power);

    // Declare the matrix
    int matrix[max_size][max_size], copy_matrix[max_size][max_size], power_matrix[max_size][max_size];

    // Get the matrix elements
    printf("\nEnter the matrix elements:\n");
    matrix_input(matrix, order, order);

    // Produce a copy of the entered matrix
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) copy_matrix[i][j] = matrix[i][j];
    }

    // Find the power matrix
    while(power > 1) {
        // Multiplication Operation
        for(int i = 0; i < order; i++) {
            for(int j = 0; j < order; j++) {
                sum = 0;
                for(int u = 0; u < order; u++) sum += matrix[i][u] * copy_matrix[u][j];
                power_matrix[i][j] = sum;
            }
        }
        for(int i = 0; i < order; i++) {
            for(int j = 0; j < order; j++) matrix[i][j] = power_matrix[i][j];
        }
        power--;
    }

    // Print the power matrix
    printf("\nThe power matrix:\n");
    matrix_output(power_matrix, order, order);
}

void determinant() {

}

void transpose() {

}

void symmetric() {

}

void matrix_input(int matrix[][max_size], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("[%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrix_output(int matrix[][max_size], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) printf ("%6d", matrix[i][j]);
        printf ("\n");
    }
}


