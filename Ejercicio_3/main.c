#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero, contadorPositivo=0, contadorNegativo=0,contador;

    for(contador=0;contador<10;contador++)
    {
	printf("ingrese el numero\n");
	scanf("%d",&numero);
	system("cls");
	
	 if(numero>0)
	   {contadorPositivo=contadorPositivo+1;
			}
      if(numero<0)
	  {contadorNegativo=contadorNegativo+1;
		  }	
	}
	
    printf("Cantidad positivos:%d Cantidad negativos:%d",contadorPositivo,contadorNegativo);  	
	
	
	
	return 0;
	
}
