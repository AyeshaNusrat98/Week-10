/*Week-10 Task #2
Write a program in C to add two matrices of order N. You should also mention the necessary condition for matrix addition.*/

#include<stdio.h>

main() {
    int num, i, j;
    printf("Enter the order of matrices(N): ");
    scanf("%d", &num);
    
    int A[num][num], B[num][num], sum[num][num];
    printf("Enter the elements of the first matrix: \n");
    for(i = 0; i < num; i++){
        for(j = 0; j < num; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: \n");
    for(i = 0; i < num; i++)
        for(j = 0; j < num; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < num; i++)
        for(j = 0; j < num; j++)
            sum[i][j] = A[i][j] + B[i][j];
    printf("The sum of the matrices: \n");
    for(i = 0; i < num; i++) {
        for(j = 0; j < num; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

}

