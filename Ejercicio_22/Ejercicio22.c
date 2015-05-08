#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int legajo;
	int sueldo;
	int personas=0;
	int contadormu500=0;
	int contadorho400=0;
	char sexo;
	
	
	char nombre;
	
	do
		{
			printf("ingrese nombre\t");
			scanf("%c",&nombre);
			fflush(stdin);
			
			printf("ingrese sexo\t");
			scanf("%c",&sexo);
			fflush(stdin);	 
			
		    printf("ingrese legajo\t"); 
			scanf("%d",&legajo);
			fflush(stdin);
				 
			printf("ingrese sueldo\t");
			scanf("%d",&sueldo);
			fflush(stdin);
			printf("\n");	 
			     
				 if((sexo!='f')&&(sexo!='m'))
				   {
				    
					printf("Error reingrese sexo\t");
				    scanf("%c",&sexo);
				    fflush(stdin);
			       
				   }while((sexo!='f')&&(sexo!='m'));
			 
				 
			
				 if(sexo=='f' && sueldo>500)
					    { 
						
						 contadormu500++;
					    	
						}
				 if(sexo=='m' && sueldo<400)
				        {
						   contadorho400++;
						   
						} 	
		personas++;
	
	
	
	    }while(personas<3);
	
	printf("\n%d  mujer/es gana/n mas de 500",contadormu500);
	printf("\n%d  hombre/s gana/n menos de 400",contadorho400);

	
	
	
	return 0;
}
