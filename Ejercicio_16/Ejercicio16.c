#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	int n1=15,n2=5,ncopia;
	
    ncopia=n1;
	n1=n2;  
	n2=ncopia;
	printf("n1:%d-n2:%d",n1,n2);
	return 0;
}
