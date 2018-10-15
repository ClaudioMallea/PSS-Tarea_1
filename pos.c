#include <stdio.h>
#include "binario.h"

    int binary_conversion(int);

     

    int main()

    {

       int num, bin;

     

       printf("Enter a decimal number: ");

       scanf("%d", &num);

       bin = binary_conversion(num);

       printf("The binary equivalent of %d is %d\n", num, bin);

    }

     

