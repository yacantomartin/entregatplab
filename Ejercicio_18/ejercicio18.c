#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
 float peso;
 char respuesta='s';
 int  menosdeochenta=0,masdeochenta=0;

while(respuesta!='n')
 { 
 
   printf("\ningrese peso\n");
   scanf("%f",&peso);
   fflush(stdin);
	 
	 if(peso<=80)
		 menosdeochenta=menosdeochenta+1;
     else
         masdeochenta=masdeochenta+1;

   printf("\n¿Quieres continuar ?\n");
   scanf("%c",&respuesta);
   fflush(stdin);
}

printf("\ncantidad de empleados que pesan menos de 80kg:%i\n",menosdeochenta);
printf("\ncantidad de empleados con mas de 80kg:%i\n",masdeochenta);


	return 0;
}
