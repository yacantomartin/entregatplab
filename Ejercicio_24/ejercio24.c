#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altura,contaal,Maxaltura=0; 
	char Nombre[40],rta='s';
    char Maxnombre[40]="-";

	do
	{ printf("Ingrese nombre");
	 gets(Nombre);
	  fflush(stdin);	
	  printf("ingrese altura");
	  scanf("%f",&altura);
	  fflush(stdin);
	  
	  if(contaal==0)
	  { Maxaltura=altura;
	    contaal=contaal+1;
	  strcpy(Maxnombre,Nombre);
	  }
	  
	  if(altura>Maxaltura)
	  {Maxaltura=altura;
	   strcpy(Maxnombre,Nombre);	 
		  }	
	  
	  printf("desea seguir ingresando alumnos ?");
	  scanf("%c",&rta); 
	  fflush(stdin);
	  }while(rta=='s');
	  
	 printf("La persona mas alta mide %.2f  y su nombre es %s",Maxaltura,Maxnombre);
		
	return 0;
}
