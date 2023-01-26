#include <stdio.h>

int main ()
{
    int A[100][100];
    int x=1;
    int R, C;
    printf ("Enter the number of rows of the matrix...");
    scanf ("%d", &R);
    printf ("Enter the number of columns of the matrix...");
    scanf ("%d", &C);
    puts ("\nIf Matrix[i][j] equals Matrix[j][i] so, this Matrix is a Symmetric matrix.\n");
    printf ("Enter the values of the matrix.>.>.>\n");
    for (int i=0; i<R; i++){
        for (int j=0; j<C; j++){
            printf ("Enter the values of Matrix[%d][%d]...", i+1, j+1);
            scanf ("%d", &A[i][j]);
        }
    }
    for (int i=0; i<R; i++){
        for (int j=0; j<C; j++){
            printf ("%6d", A[i][j]);
        }
        printf ("\n");
    }
    for (int i=0; i<R; i++){
        for (int j=0; j<C; j++){
            if ( A[i][j] != A[j][i] ){
                x=0;
                break;
            }
        }
    }
    if ( x==1 ){
        printf ("This matrix is a Symmetric matrix.\n");
    }
    else {
        printf ("This matrix is not a Symmetric matrix.\n");
    }
}
