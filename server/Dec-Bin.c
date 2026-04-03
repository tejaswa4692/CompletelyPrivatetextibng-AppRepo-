#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



int convert_dectobin(int num){
    char out[100];
    int process = num;
    while (process >= 0)
    {
        if(process % 2 == 0)
        {
            process = process /2;
            strcat(out, "0");
        }else{
            process = round(process/ 2);
            strcat(out, "1");
        }
    }
    int outi = 10;
    outi = atoi(out);
    
    return outi;
}



int main()
{
    //Get user input
    int num = 6;
    printf("%d", num);
//    printf("\nInput a number to convert to bin: ");
//    scanf("\n%d", num);
//    printf("\n%d", num);    
//    printf("\n");


    //Conversion of Dec->Bin

   int bin = convert_dectobin(num);

    //output


    printf(" \n %d \n", bin);


    /* code */
    return 0;
}


