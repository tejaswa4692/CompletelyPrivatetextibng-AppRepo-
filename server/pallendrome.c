#include <stdio.h>
#include <math.h>

//pallendrome test for string

int main() {
    
    char str[] = "";
    printf("give a string to test wether its pallendrome or not: ");
    scanf("%d", &str); 
    int len = round(sizeof(str) / 2);
    int check = 0;
    for (int i = 0; i < len; i++)
    {
        if (-(str[i] == str[-(i + 1)]))
        {
            check++;
        }
    }
    (check == len)? printf("String is in pallendrome") : printf("string isnt in pallendrome");
    
    
    return 0;
}