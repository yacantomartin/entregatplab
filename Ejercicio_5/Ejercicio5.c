#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	 
	 int numero;
	 printf("indique numero");
	 scanf("%d",&numero);
	 fflush(stdin);
	 
	 if(numero>0)
	 {printf("El numero es positivo");
	 }
	 else
	 {printf("El numero es negativo");
	 }
	 
	
	
	return 0;
	
}
