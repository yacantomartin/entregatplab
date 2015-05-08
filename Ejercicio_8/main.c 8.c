#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  char ingreso;
   char contadoA,contadoE=0,contadoI=0,contadoU=0,contadoO=0;
   char cantidad;
   contadoA=0;
   printf("Letra");
   for(cantidad=0;cantidad<20;cantidad++)
   
   { 
        fflush(stdin);                
        printf("\n>");
        scanf("%c",&ingreso);
        ingreso=tolower(ingreso);
        switch(ingreso)
        {              
                       case 'a':
                            contadoA++;
                            break;
                       case 'e':
                            contadoE++;
                            
                            break;
                       case 'i':
                            contadoI++;
                            break;
                       case 'u':
                            contadoU++;
                            break;
                       case 'o':
                            contadoO++;
                            break;
                       
        }
        system("cls");
        printf("A:%d - E:%d - I:%d - U:%d - O:%d",contadoA,contadoE,contadoI,contadoU,contadoO);
        }
      
  system("PAUSE");	
  return 0;
}
