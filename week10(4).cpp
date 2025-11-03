/*Week-10 Task #4
Write a program in C to print the lower triangular and upper triangular matrix of a given matrix.*/

#include <stdio.h>

main() {
    int num, i, j;
    printf("Enter the order of the matrix: ");
    scanf("%d", &num);
    int A[num][num];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < num; i++)
        for(j = 0; j < num; j++)
            scanf("%d", &A[i][j]);

    printf("Lower Triangular Matrix:\n");
    for(i = 0; i < num; i++) {
        for(j = 0; j < num; j++) {
            if(i >= j)
                printf("%d ", A[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    printf("Upper Triangular Matrix:\n");
    for(i = 0; i < num; i++) {
        for(j = 0; j < num; j++) {
            if(i <= j)
                printf("%d ", A[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
 
