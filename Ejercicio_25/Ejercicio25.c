#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int materiauno,materiados,materiatres,materiacuatro,materiacinco,materiaseis,iniciadormax=0,promax=0,promedio;
	char nombre[30],nombremax[30]="-",rta='s';
	do{
	    printf("ingrese nombre\t");
	    gets(nombre);
		fflush(stdin);
		
		printf("ingrese nota materia 1\t");	
		scanf("%d",&materiauno);
		fflush(stdin);
		
		printf("ingrese nota materia 2\t");	
		scanf("%d",&materiados);
		fflush(stdin);
       		
		printf("ingrese nota materia 3\t");	
		scanf("%d",&materiatres);
		fflush(stdin);
		
		printf("ingrese nota materia 4\t");	
		scanf("%d",&materiacuatro);
		fflush(stdin); 
		 
		printf("ingrese nota materia  5\t");	
		scanf("%d",&materiacinco);
		fflush(stdin); 
  
        printf("ingrese nota materia  6\t");	
		scanf("%d",&materiaseis);
		fflush(stdin);    
	    
	    promedio=((materiauno+materiados+materiatres+materiacuatro+materiacinco+materiaseis)/6);
	    printf("El promedio de %s -  es de %d\n",nombre,promedio);
	
	       if(iniciadormax==1)
	       {promax=promedio;
	        strcpy(nombremax,nombre);
		   
		   printf("El mayor promedio es de  %s  es de %d\n",nombremax,promax);
		   }
	
	
	iniciadormax++;

	printf("desea seguir poniendo alumnos?\n");
	scanf("%c",&rta);
	fflush(stdin);
	}while(rta=='s');
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
