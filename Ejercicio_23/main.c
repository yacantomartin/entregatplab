#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 float m,lluviaXdia,maxlluvia=0,minlluvia=0,acumuladorlluvia=0,promedio;
 
 for(m=1;m<10;m++)
	{ 
	printf("ingrese cantidad de milimetros");
	scanf("%f",&lluviaXdia);
	fflush(stdin);
		
		if(lluviaXdia>0)
	       
		   {
		    maxlluvia=lluviaXdia+maxlluvia;
	        minlluvia=minlluvia+lluviaXdia;
		   }  
	   
	    if (lluviaXdia>maxlluvia)
	      
		   {
		    maxlluvia=lluviaXdia;
	       }
	
	    else
		 
		  { 
		    minlluvia=lluviaXdia;
	      }
		 
	acumuladorlluvia=lluviaXdia+acumuladorlluvia;
	}
	promedio=acumuladorlluvia/m;
	
	printf("Cantidad de lluvia maxima en un dia:%.3f\n",maxlluvia);
	printf("cantidad de lluvia minima en un dia:%.3f\n",minlluvia);
	printf("promedio %.3f \n",promedio);
	
	
	
	
	
	return 0;
}
