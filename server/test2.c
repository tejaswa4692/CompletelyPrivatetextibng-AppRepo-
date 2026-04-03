#include <stdio.h>

int randomfunc(int a){
    for (int i = a; i > 0; i--)
    {
        int calc = i + randomfunc(i);
        printf("%d", calc);
    }
    
    return 0;
}

int main() {
    printf("Input a num: ");
    int num;
    printf("\n");
    scanf("%d", &num);
    randomfunc(num);
    return 0;
}


//+-----+
//|     |
//|     |
//|     |
//+----+



