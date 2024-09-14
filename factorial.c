#include <stdio.h>

int main()
{
    int n, i;
    long int fact = 1; 

   
    printf("Enter a positive integer: ");
    scanf("%d", &n);

   
    if (n < 0)
    {
        printf("not defined for negative \n");
    }
    else
    {
       
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }

       
        printf(" %ld\n",fact);
    }

    return 0;
}