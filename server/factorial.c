#include <stdio.h>

int main()
{
    printf("\nEnter a number to find its factorial: ");
    int a, fac = 1;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        fac *= i;
    }
    printf("\nfactorial of this number is: %d", fac);


    return 0;
}
