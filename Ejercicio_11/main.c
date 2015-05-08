#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contadorpar;
	int i=0;
	for(i=0;i<=100;i=i+2)// o puede ser i+=2
     { 
	 
	 if(i%2==0)
	    {contadorpar=contadorpar+1;
		}
	 
	 
	 printf("%d\n",i);
	 
	  }	
	printf("cantidad de numeros pares:%d",contadorpar);
	system("pause");
	return 0;
}
