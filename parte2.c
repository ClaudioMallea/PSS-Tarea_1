#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
int main(){

	char *s= "hola";
	char* b= reemplazo("hola que tal",'a',"xyz");
	printf("%s\n",b    );
	return 0;
}