#include <stdio.h>

int main()
{
    int n, a, b, sum = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;
    for (; a != 0; a /= 10)
    {
        b = a % 10; 
        sum += b;     
        count++;           
    }
    printf("Total digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

    return 0;
}