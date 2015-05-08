#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {  
  char nombreyapellido[10],rta='s';
  int  edad,deporte,promedioedad,contadortennis=0,contadorr=0,contadorv=0,contadorh=0,contadorf=0;
  int  edadte=0,edadru=0,edadvo=0,edadho=0,edadfu=0;
  float promediote,promedioru,promediovo,promedioho,promediofu;
 
 
  do
  { 
	
	printf("ingrese nombre\t:");
 	gets(nombreyapellido);
	fflush(stdin);
	
	printf("ingrese edad\t:");
	scanf("%d",&edad);
	fflush(stdin);
	
	
	printf("ingrese 1 para tennis,2 para rugby,3 para voley,4 para hockey y 5 para futbol.\n");
	printf("ingrese deporte\t:");
	scanf("%d",&deporte);
	fflush(stdin);
    
    switch(deporte)
    {
	
    	case 1:
    		contadortennis++;
		    edadte+=edad;
            promediote=edadte/contadortennis;
     
			    break;
        case 2:         
            contadorr++;   
	        edadru+=edad;	
	        promedioru=edadru/contadorr;  
  	       
    
			    break;
	
	    case 3:
	        contadorv++;    
	        edadvo+=edad; 
	          
  	promediovo=edadvo/contadorv;
			
			    break;
	    case 4:
	    	contadorh++; 
            edadho+=edad;
	        promedioho=edadho/contadorh;  
	  
			    break;
	    case 5:
	    	contadorf++;
			edadfu+=edad;
	        promediofu=edadfu/contadorf;
			
			    break;
	
	}
   
	  
	printf("desea seguir ingresando datos?\t:");
	scanf("%c",&rta);
	fflush(stdin);
	}while(rta=='s'); 
	
	
	
    printf("Cantidad de jugadores de tennis es %d y su promedio de edad es %1.f\n ",contadortennis,promediote);   
    printf("Cantidad de jugadores de rugby es %d y su promedio de edad  es %1.f\n",contadorr,promedioru);
    printf("Cantidad de jugadores de voley es %d y su promedio de edad  es %1.f\n",contadorv,promediovo);
    printf("Cantidad de jugadores de hockey es %d y su promedio de edad es %1.f\n",contadorh,promedioho);
    printf("Cantidad de jugadores de futbol es %d y su promedio de edad es %1.f\n",contadorf,promediofu);


		          
	


return 0;

	
}
