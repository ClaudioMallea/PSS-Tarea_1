#include <stdio.h>
#include "printBits.h"



int posicionBits(int x, int p, int n){
int mask = !((-1)<< n);
return mask;

}

int main(){
	int mascara= 010101/*posicionBits(2,3,7)*/;
	    int i = 23;
        
        float f = 23.45f;
        printBits(sizeof(i), &i);
        
        printBits(sizeof(f), &f);

}