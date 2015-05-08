#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
 int numero;
 int cuadrado;
 printf("Ingrese numero\n");
 scanf("%d",&numero);
 cuadrado=numero*numero;
 		 if(numero>0)
  			{printf("cuadrado:%d",cuadrado);
  
  			}
         else
            {printf("Error, ponga un numero mayor a 0");
			}

	return 0;
}
