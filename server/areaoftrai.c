#include <stdio.h>
#include <math.h>


int main()
{
    float a,b,c,s;
    printf("\nGive value of first side of triangle: ");
    scanf("%f", &a);
    printf("\nGive value of second side of triangle: ");
    scanf("%f", &b);
    printf("\nGive value of third side of triangle: ");
    scanf("%f", &c);
    s = (a + b + c) / 2;
    float area = ((s-a)*(s-b)*(s-c))*s;
    area = sqrt(area);
    printf("\narea of the said triangle is %.4f", area);



    return 0;
}


