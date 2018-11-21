#include <stdio.h>
main()
{
   float x;
	printf("Indique o número:\n");
	scanf("%f", &x);
	if((x<-10) || (x>= 5 && x<45) || (x>120 && x<=245))
	printf("O número encontra-se nos intervalos");
        	else 
		printf(" o número não se encontra nos intervalos");
   
}	
