#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{float valorHora;
 int horas;
 char nombre[100];
 char antiguedad;
 float resultado;
    
   printf("Nombre ");
   scanf("%s",&nombre);
   fflush(stdin);
   
   printf("Antiguedad ");
   scanf("%c",&antiguedad);
   fflush(stdin);
   
   printf("horas ");
   scanf("%d",&horas);
   fflush(stdin);
   
   printf("valor horas  ");
   scanf("%f",&valorHora);
   fflush(stdin);

   resultado= valorHora * horas + (antiguedad * 30);
   printf("\nEl emplreado %s cobra %.2f\n",nombre,resultado);
   

  system("PAUSE");	
  return 0;
}
