#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
 {  int numero1,numero2,numero3,numero4,numero5,promedio;
    
	printf("ingrese 5  numeros\n");
	scanf("%d",&numero1);
	fflush(stdin);
	
	scanf("%d",&numero2);
	fflush(stdin);
	
	scanf("%d",&numero3);
	fflush(stdin);
	
	scanf("%d",&numero4);
	fflush(stdin);
	
	
	scanf("%d",&numero5);
	fflush(stdin);
	
	promedio=(numero1+numero2+numero3+numero4+numero5) /5;
	
	printf("El promedio es de %d",promedio);
	
	
	
	
	
	return 0;
	
	
}
