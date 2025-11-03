/*Week-10 Task #1
Program to sort array in ascending order.*/

#include<stdio.h>

main() {
    int size, temp, i, j;
    printf("Enter the expected size of the array: ");
    scanf("%d", &size);
    int ar[size];
    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++)
        scanf("%d", &ar[i]);

    for(i = 0; i < size-1; i++) {
        for(j = 0; j < size-1-i; j++) {
            if(ar[j] > ar[j+1]) {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }

    printf("The new array sorted in ascending order: ");
    for(i = 0; i < size; i++)
        printf("%d ", ar[i]);
    printf("\n");
}

