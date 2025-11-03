/*Week-10 Task #3
Write a program in C to find the transpose of a given matrix.*/

#include <stdio.h>

main() {
    int x, y, i, j;
    printf("Enter the size of the matrix (x rows & y columns): ");
    scanf("%d %d", &x, &y);
    
    int A[x][y], B[x][y];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < x; i++)
        for(j = 0; j < y; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < x; i++)
        for(j = 0; j < y; j++)
            B[j][i] = A[i][j];
    printf("The transpose of the matrix is:\n");
    for(i = 0; i < y; i++) {
        for(j = 0; j < y; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
}

