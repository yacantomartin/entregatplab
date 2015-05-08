#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	char Nombreapellido[20],nombremin[30]="",nombremax[30]="";
	int  puntosint,puntosculturageneral,puntosbelleza,puntajegral,i,imaxmin;
	int  pintmax=0,pcultgralmax=0,pbellezamax=0,pintmin,pcultgralmin,pbellezamin;
	int  acuint=0,acucultura=0,acubelleza=0;
	 for(i=0;i<2;i++)
	  {
	  
			printf("ingrese sunombre y apellido\t");
			 gets(Nombreapellido);
			 fflush(stdin);
			 
			 printf("puntaje inteligencia\t");
			 scanf("%d",&puntosint);
			 fflush(stdin); 
			
			 printf("puntaje cultura general\t");
			 scanf("%d",&puntosculturageneral);
			 fflush(stdin);
			
			 printf("puntaje belleza\t");
			 scanf("%d",&puntosbelleza);
			 fflush(stdin);
			 
				if(imaxmin==0)
                 { 
                  pintmax=puntosint;//maximos
                  pcultgralmax=puntosculturageneral;
                  pbellezamax=puntosbelleza;
                  strcpy(nombremax,Nombreapellido);
				  
				  pintmin=puntosint;//minimos
                  pcultgralmin=puntosculturageneral;
                  pbellezamin=puntosbelleza;
				  imaxmin++;
 				 	 
					  }	
 				
				 if(puntosint>pintmax)	 
	             { 
	              pintmax=puntosint;
	              strcpy(nombremax,Nombreapellido);
				 }
	
	             if(puntosculturageneral>pcultgralmax)
	             {
	             	pcultgralmax=puntosculturageneral;
	             	strcpy(nombremax,Nombreapellido);
				 }
	
	             if(puntosbelleza>pbellezamax)
	             {
	             	pbellezamax=puntosbelleza;
	             	strcpy(nombremax,Nombreapellido);
				 }
	
	             
				 if(pintmin>puntosint)
	             {
	             	pintmin=puntosint;
	             	
					
				 }
	
	             if(pcultgralmin>puntosculturageneral)
	             {
	             	pcultgralmin=puntosculturageneral;
	             	
					
				 }
	             if(pbellezamin>puntosbelleza)
	             {
	             	pbellezamin=puntosbelleza;
	             
				    
				 }
	
	
	
	  
      acuint=acuint+puntosint;	
	  acucultura=acucultura+puntosculturageneral;
	  acubelleza=acubelleza+puntosbelleza;
	
	  puntajegral=pintmax+pcultgralmax+pbellezamax;
	  }

	printf("El mayor puntaje general es de %d y le pertenecea %s\n",puntajegral,nombremax);
	printf("El puntaje acumulado int es: %d\ncultura general: %d\nbelleza: %d\n  ",acuint,acucultura,acubelleza);
 	printf("\nEl menor puntaje acumulado en int:%d\nde cultura general: %d\nbelleza %d\n",pintmin,pcultgralmin,pbellezamin);  
	 return 0;
}
