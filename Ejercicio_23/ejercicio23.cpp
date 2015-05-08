#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 float m,lluviaXdia,maxlluvia=0,minlluvia=0,acumuladorlluvia=0,promedio, divisorprom=0;
 char dia[20],rta='s',diamax[20]="-",diamin[20]="-";
do
	{ printf("ingrese cantidad de milimetros");
	  scanf("%f",&lluviaXdia);
	  fflush(stdin);
	  
	  printf("ingrese dia");		
	  scanf("%s",dia);		
	  fflush(stdin); 		
			
			
			if(lluviaXdia>0)
		       {maxlluvia=lluviaXdia+maxlluvia;
		        minlluvia=minlluvia+lluviaXdia;
				strcpy(diamax,dia);
				strcpy(diamin,dia);
				}  
		    
			if (lluviaXdia>maxlluvia)
		     {  maxlluvia=lluviaXdia;
		        strcpy(diamax,dia);
			 }
		
		    else
			{   minlluvia=lluviaXdia;
			    strcpy(diamin,dia);
			
			}
		 
	   divisorprom++;	  
	   acumuladorlluvia=lluviaXdia+acumuladorlluvia;
	   printf("desea seguir ingresando los dias del mes ?");
	   scanf("%c",&rta);
	
	}while(rta!='n');
	promedio=acumuladorlluvia/divisorprom;
	
	printf("El dia  que mas llovio fue %s y cayeron :%.2f milimetros\n",diamax,maxlluvia);
	printf("El dia que menos llovio fue :%s y cayeron :%.2f\n",diamin,minlluvia);
	printf("promedio %.2f \n",promedio);
	
	
	
	
	
	return 0;
}
