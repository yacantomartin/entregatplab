#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{int i=0;
 int j=0;
printf("\npares\n");
for(i=0;i<=100;i+=2)
	{
	printf("%d\n",i);
	}

printf("\nImpares\n");


for(j=0;j<=100;j+=3)
	{
	printf("%d\n",j);
	}	
	return 0;
}
