#include <stdio.h>

int main()
{
    float sal;
    printf("\nEnter a value of gross salary of an indivdual: ");
    scanf("%f", &sal);
    sal = sal + (sal / 2);
    sal = sal + 2000;
    printf("\nYour total salary is %.4f", sal);
    return 0;
}
