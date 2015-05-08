#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
   char nombre[30],rta='s';
  int conte=0,tarifahoras,nhoras,sueldo;
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
	 conte++;
	 }while(rta!='n');
     
     printf("cantidad de empleados que calcularon su salario %d\n",conte);
     printf("El empleado %s gana %d por semanas",nombre,sueldo=(tarifahoras*nhoras));	
	 
	
	
	return 0;
}
