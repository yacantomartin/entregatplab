#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
float bvendedor1,bvendedor2,bvendedor3;
float total1,total2,total3;
float importe1,importe2,importe3;
int respuesta='0';

while(respuesta=='0')
  { printf("ingrese cantidad de botellas del vendedor 1 \n");
    scanf("%f",&bvendedor1);
	fflush(stdin);
	
	printf("ingrese importe de botellas del vendedor1\n");
    scanf("%f",&importe1);
    fflush(stdin);
    
	printf("ingrese cantidad de botellas del vendedor 2 \n");
    scanf("%f",& bvendedor2);
	fflush(stdin);
    
    printf("ingrese importe de botellas del vendedor2\n");
    scanf("%f",&importe2);
    fflush(stdin);
   
    printf("ingrese cantidad de botellas del bvendedor 3 \n");
    scanf("%f",&bvendedor3);
	fflush(stdin);
  
    printf("ingrese importe de botellas del bvendedor3\n");
    scanf("%f",&importe3);
    fflush(stdin);
  
  
    printf("desea seguir cargando botellas?(ingrese cero si quiere cerrar la operacion)\n");
    scanf("%d",&respuesta);
    fflush(stdin);
  
 
  
  
  }
  total1=(bvendedor1*importe1)*0.05;
  total2=(bvendedor2*importe2)*0.05;
  total3=(bvendedor3*importe3)*0.05;
  
  printf("El vendedor uno gana:%.2f\n",total1);
  printf("El vendedor dos gana:%.2f\n",total2);
  printf("El vendedor tres gana%.2f\n",total3);

	return 0;
}
