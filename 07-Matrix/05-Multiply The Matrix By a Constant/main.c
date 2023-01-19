// Multiplying The Matrix By a Constant.

#include <stdio.h>

int N, M;

int main()
{
    int A[100][100];
    printf("The program is designed to find the Multiplication of Matrix By a Constant.\n");
    printf("\nEnter the number of rows of the matrix...");
    scanf("%d", &N);
    printf("Enter the number of columns of the matrix...");
    scanf("%d", &M);

    // get matrix.
    printf("\n.>.>.> please enter a matrix...\n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("Enter the value of A[%d][%d]...", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // get scalar number.
    int scalar;
    printf("\n.>.>.> Please enter a scalar number...");
    scanf("%d", &scalar);

    // print the new matrix.
    printf("\n.>.>.> The new matrix is\n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++) printf("%5d", A[i][j] * scalar);
        printf("\n");
    }

}
