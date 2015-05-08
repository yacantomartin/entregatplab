#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{ 

  char nombre[20],maxnombre[30]="",rta='s';
  int legajo,auxleg=0,acuapro=0,acudic=0,acumar=0;
  float promedio,maxpromedio=0;
  do
  { 
  	printf("ingrese legajo:\t");
  	scanf("%d",&legajo);
  	fflush(stdin);
	  
	printf("ingrese nombre:\t");
  	gets(nombre);
  	fflush(stdin);
  	
  	printf("ingrese promedio:\t");
  	scanf("%f",&promedio);
  	fflush(stdin);
  	
	  	if(auxleg==0)
	  	{
	  		auxleg=legajo;
	  		maxpromedio=promedio;
			strcpy(maxnombre,nombre);
	  	}
  	    if(maxpromedio<promedio)
  	    {  
  	       maxpromedio=promedio;
  	       auxleg=legajo; 
           strcpy(maxnombre,nombre);		 
		 
		  }
  	    
  	    
  	    
  	    if(promedio>= 7)
		  {
		  	acuapro++;
		  } 
  	    if(promedio<=7 || promedio>=4)
         {
         	acudic++;
	     }  	
         else
		 {
		 	acumar++;
		 } 
  printf("desea seguir ingresando datos?si/no: \n");
  scanf("%c",&rta);
  fflush(stdin);
  }while(rta=='s');
  	
  printf("Cantidad de alumnos aprobados:%d\n",acuapro);
  printf("cantidad de alumnos que rendiran de diciembre:%d\n",acudic);
  printf("cantidad de alumnos que rendiran en marzo %d\n",acumar);	
  printf("El promedio maximo es de %1.f, su legajo %d y le pertenece a %s\n",maxpromedio,auxleg,maxnombre);	
	
	return 0;
}
