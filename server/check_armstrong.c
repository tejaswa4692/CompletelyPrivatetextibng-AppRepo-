#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, original, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0)
    {
        original /= 10;
        n++;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10; 
        result += pow(remainder, n);    
        original /= 10;           
    }

    

    printf("\n%d", result);
    printf("\n%d", num);
    
    if (result == num)
    {
        printf("\nThe number is armstrong.");

    }else {
        printf("\nThe number isnt armstrong.");
    }

    return 0;
}
