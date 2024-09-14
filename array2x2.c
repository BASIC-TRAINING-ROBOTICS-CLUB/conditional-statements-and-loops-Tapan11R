#include <stdio.h>

int main()

{
    int array[2][2];

    printf("Enter 4 elements of matrix:\n");
    
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter element");
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nThe 2x2 matrix is:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += array[i][j];
        }
    }
    printf("\nsum of matrix: %d\n", sum);

    return 0;
}
