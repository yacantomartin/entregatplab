#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ int f;
  int numero;
  int cuadrado;
  int cubo;
  float numeroIngresado;
  
  printf("ingrese numero\n");
  scanf("%f",&numeroIngresado);
  fflush(stdin);
 
  for(f=1;f<=numeroIngresado;f++)
  { 
   
   
   
   printf("%d \t %d \t %d\n"  , f, f*f, f*f*f);                         
 
  
  
  }  
 
 system(clr);  
 system("PAUSE");	
  return 0;
}
