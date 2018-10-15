
#include <stdio.h>

typedef unsigned int uint;
uint borrar_bits(uint x, uint pat, int len){

uint salvado=x;

int mascara = ~(( -1) <<len );
for(int iter=0;iter< 32; iter++) {


	if((x&mascara )==pat){


	uint NuevaMascara= ~((~(-1<<len))<<(iter)) ;
	salvado= (NuevaMascara & salvado);
	

	}

	
	x>>=1;
	


}
return salvado;


}





int sizeOfInt(){
	int size=0;
	int aux=1;
	while(aux){
		size++;
		aux<<=1;
	}
	return size;

}




int posicionBits ( int x , int p , int n) {
int mask = ~(( -1) <<n );

for(int iter=0;iter< 32-n; iter++) {
	if((x&mask )==p){
	return iter ;
	}
	x>>=1 ;
}
return -1;

}
int main(){
int a;
a=borrar_bits(137, 1, 1);

printf("%u\n", a);



}