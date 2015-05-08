#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
  {
	int n1,n2;
	char operaciones,rta='s';
	int resultados,resultador,resultadom,resultadod;
    
	while(rta=='s')
	{
	printf("ingrese la operacion que desea(suma,resta,multiplicacion o division)");
	scanf("%c",&operaciones);
		switch(operaciones)
		{
		
				case '+':
				printf("ingrese primer numero");
				scanf("%d",&n1);
				fflush(stdin);
				printf("ingrese el segundo numero");
				scanf("%d",&n2);
				fflush(stdin);
				resultados=n1+n2;
				printf("el resultado es %d",resultados);
				 break;
			  
			    case '-':
				printf("ingrese primer numero");
				scanf("%d",&n1);
				fflush(stdin);
				printf("ingrese el segundo numero");
				scanf("%d",&n2);
				fflush(stdin);
				resultador=n1-n2;
				printf("el resultado es %d",resultador);
				 break;
			
			    case '*':
				printf("ingrese primer numero");
				scanf("%d",&n1);
				fflush(stdin);
				printf("ingrese el segundo numero");
				scanf("%d",&n2);
				fflush(stdin);
				resultadom=n1*n2;
				printf("el resultado es %d",resultadom);
				 break; 
		        	
			    case '/':
				printf("ingrese primer numero\t");
				scanf("%d",&n1);
				fflush(stdin);
				printf("ingrese el segundo numero\t");
				scanf("%d",&n2);
				fflush(stdin);
				resultadod=n1/n2;
				printf("el resultado es %d",resultadod);
				 break;
	    }
         	
	printf("desea realizar otra operacion? si/no: \t ");
	scanf("%c",&rta);
	fflush(stdin);
    }
	
	
	
	
	return 0;
}
