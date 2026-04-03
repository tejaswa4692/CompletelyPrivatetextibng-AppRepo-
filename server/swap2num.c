#include <stdio.h>

int main()
{

    int a,b;
    printf("\nenter value in a: ");
    scanf("%d", &a);
    printf("\nenter value in b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a =a - b;
    printf("\nhere you go a = %d, b = %d", a, b);
    return 0
    
}
