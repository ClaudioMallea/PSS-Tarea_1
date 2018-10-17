#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "t1.h"

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



char* reemplazo(char *s, char c, char *pal){
char *r= s;
int AparicionesC=0;
while(*r++){          /*PRIMER RECORRIDO DE STRING */
	if(*r==c){
		AparicionesC++;
	}
;
}
int a= r-s-1;  /*a es el largo de s*/

char *z= pal;
while(*z++){
;
}
int b= z-pal-1; /*b es el largo de pal*/





char *StringResultante= malloc(    (  ((b*AparicionesC)+a) -AparicionesC+1)*sizeof(char));   /*   ASIGNACIÓN DE MEMORIA A STRING RESULTANTE*/
char*rr=s;
char*ptr=StringResultante;
char*ptr_pal=pal;

while(*rr){
	
	if(*rr==c){


		while(*ptr_pal){
		*ptr=*ptr_pal;
		ptr++;
		ptr_pal++;

		}
		ptr_pal=pal;

		
	}
	else{
		*ptr=*rr;
		ptr++;


	}
	rr=rr+1;

}
*ptr=0;



return StringResultante;








}








 void reemplazar(char *s, char c, char *pal){
printf("%s\n",s);
char* puntero_s=s;
char* puntero_pal=pal;
int Apariciones=0;
while(*puntero_s++){
	if(*puntero_s==c){
		Apariciones++;
	}

;
}

int largo_s= puntero_s-s-1;

while(*puntero_pal++){
	;
}
int largo_pal=puntero_pal-pal-1;


int largo_string_resultante=(  ((largo_pal*Apariciones)+largo_s) -Apariciones+1);


puntero_s=s;  /*apunto denuevo a s*/
puntero_pal=pal;/*apunto denuevo a pal*/
char* puntero_string_resultante=s;

if(largo_pal==1){



while(*puntero_s){
	if(*puntero_s==c){
		*puntero_s=c;
	}
	puntero_s++;

}





}
else{
puntero_s=s+largo_s-1;
puntero_string_resultante=s+largo_string_resultante-1;
*puntero_string_resultante='\0';
puntero_string_resultante--;






for(int i= largo_s+1;i>1 ; i--  ){
	
	
	printf("%c\n",*puntero_s);
	if(*puntero_s==c){
		


		for(int j=largo_pal;j>0;j--){

		puntero_pal=pal+j-1;
		
		*puntero_string_resultante=*puntero_pal;/*bien*/
		puntero_string_resultante--;/*bien*/



		}

	
	}
	else{
    *puntero_string_resultante=*puntero_s;
	puntero_string_resultante--;
	
	}
	puntero_s--;
}




}
puntero_s=s;
puntero_string_resultante=s;








}  