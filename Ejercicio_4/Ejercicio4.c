#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float base, altura, sup;
	
	
	printf("Ingrese altura\n");
	scanf("%f",&altura);
	fflush(stdin);
	
	printf("Ingrese base\n");
	scanf("%f",&base);
	fflush(stdin);
	
	sup=(base*altura)/2;
	
	printf("La superficie del Triangulo es: %.2f",sup);
	
	
	
	
	
	
	return 0;
}
