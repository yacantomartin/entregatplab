#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{ char nombre[30],rta='s',nombreMax[40]="",nombreMin[40]="";
 int conte=0,tarifahoras,nhoras,sueldo,maxsueldo=0,minsueldo=0,promediosueldo,acumsueldo=0;
   do
     {
    
      printf("ingrese Nombre");
      gets(nombre);
      fflush(stdin);    	 	
     
	  printf("ingrese horas");
      scanf("%d",&nhoras);
      fflush(stdin);
     
      printf("ingrese tarifa de horas");
      scanf("%d",&tarifahoras);
      fflush(stdin);
     
      printf("desea ingresar mas datos?");
      scanf("%c",&rta);
      fflush(stdin);
	  
	  sueldo=tarifahoras*nhoras;
	 
	 
	 
	 	if (conte==0)
		 {  
	    	maxsueldo=sueldo;  
	 		strcpy(nombreMax,nombre);
	 
	    	minsueldo=sueldo;
        	strcpy(nombreMin,nombre);	 
	 	 }
	    if(maxsueldo<sueldo)
	    {
	    	maxsueldo=sueldo;
	    	strcpy(nombreMax,nombre);
		}
		if(minsueldo>sueldo)
		{
			minsueldo=sueldo;
			strcpy(nombreMin,nombre);
		}
	   acumsueldo+=sueldo;
	   conte++;
	  }while(rta!='n');
      
	  promediosueldo=acumsueldo/conte;
      
      printf("cantidad de empleados que calcularon su salario %d\n",conte);
      printf("El sueldo maximo es de %d y pertenece a %s\n",maxsueldo,nombreMax);
	  printf("El sueldo minimo es de %d y pertenece a %s\n",minsueldo,nombreMin);
	  printf("A la empresa le cuesta %d para pagarle a sus empleados y el promedio es %d\n",acumsueldo,promediosueldo);
	 return 0;
	
	
	
	
	return 0;
}
