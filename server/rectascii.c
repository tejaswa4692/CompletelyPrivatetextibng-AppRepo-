#include <stdio.h>

//ascii rect

int main() {
    int length;
    int width;
    printf("Enter len of rect: ");
    scanf("%d", &length);
    printf("\nEnter width of rect: ");
    scanf("%d", &width);
    printf("+");


    //width (top)
    for (size_t i = 0; i < width; i++)
    {
        printf("-");
    }
    printf("+\n");

    //length(side both)
    for (size_t i = 0; i < length; i++)
    {
        printf("|");
        for (size_t i = 0; i < width; i++)
        {
            printf(" ");
        }
        printf("|\n");
    }
    //width (bottom)
    printf("+");
    for (size_t i = 0; i < width; i++)
    {
        printf("-");
    }
    printf("+\n");

    
    return 0;
}