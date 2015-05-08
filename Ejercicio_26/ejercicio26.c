#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int temperaturamaxima,temperaturaminima,tempmaxanual,tempminanual,contadortemp=0;
char fecha[20],fechamax[30]="-",fechamin[30]="-";

	printf("ingrese fecha");
	gets(fecha);
	fflush(stdin);
	
	printf("ingrese temperatura maxima");
	scanf("%d",&temperaturamaxima);
	fflush(stdin);
	
	printf("ingrese temperatura minima");
	scanf("%d",&temperaturaminima);
	fflush(stdin);
	
	if(contadortemp==0)
		{
			tempmaxanual=temperaturamaxima;
			tempminanual=temperaturaminima; 
		    strcpy(fechamax,fecha);
		    strcpy(fechamin,fecha);
		
		
		} 
	if(temperaturamaxima> tempmaxanual)
		{ 
			tempmaxanual=temperaturamaxima+tempmaxanual;
			strcpy(fechamax,fecha);
		}
	if(temperaturaminima<tempminanual)
		{
			tempminanual=temperaturaminima+tempminanual;
			strcpy(fechamin,fecha);
		}
		printf("/nEl dia mas caluroso fue %s con %d grados",fechamax,tempmaxanual);
		printf("/nEl dia mas frio fue %s con %d grados",fechamin,tempminanual);
	return 0;
}
