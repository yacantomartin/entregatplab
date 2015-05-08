#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	char respuesta='s';
	
	

	    while(respuesta!='n') 
		  		 {printf("indique numero entre el 1 al 7 \n");
	              
				  scanf("%d",&numero);
	              fflush(stdin);
					 switch(numero)
					{ case 1:
			 		   printf("hoy es lunes\n");
				      break;
					  
					  case 2: 
					  	printf("hoy es martes\n");
					  break;
					  
				      case 3:	     
					    printf("hoy es miercoles\n");
					  break;  
					  
					  case 4:
					    printf("hoy es jueves\n"); 
					  break;
					  
					  case 5:
					    printf("Hoy es viernes\n");
				 	  break;
				 	  
				 	  case 6:
				 	    printf("hoy es sabado\n");
				 	  break;
					   
					  case 7: 
					    printf("Hoy es domingo\n");
					  break;  
			        }
		           
				   
				    printf("¿quiere continuar ?\n");
					scanf("%c",&respuesta); 
		            fflush(stdin);
	               }
	                 
                                         	
	return 0;
}
