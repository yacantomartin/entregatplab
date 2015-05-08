#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


int numero;

printf("Ingrese numero");
scanf("%d",&numero);
fflush(stdin);
 
 if(numero%2 ==0)
 {printf("El numero ingresado es un numero par");
 }
else
{printf("El numero ingresado es impar");
}







	return 0;
}
