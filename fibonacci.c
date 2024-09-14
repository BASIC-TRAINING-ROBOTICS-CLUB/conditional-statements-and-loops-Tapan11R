#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci sequence:\n");

    for (int i = 0; i < n; i++)
    {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(", %d", b);
        } else {
            c = a + b;
            a = b;
            b = c;
            printf(", %d", c);
        }
    }
    printf("\n");

    return 0;
}
