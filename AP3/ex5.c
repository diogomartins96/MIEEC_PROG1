#include <stdio.h>
main()
{
   float x, y;
	printf("Insira um valor de x:");
	scanf("%f", &x);
	printf("Insira um valor de y:");
	scanf("%f", &y);
	if(x>0 && y>0)
		printf(" O ponto encontra-se no 1ºQuadrante");
	if(x<0 && y>0)
		printf(" O ponto encontra-se no 2ºQuadrante");
	if(x<0 && y<0)
		printf(" O ponto encontra-se no 3ºQuadrante");
	if(x>0 && y<0)
		printf(" O ponto encontra-se no 4ºQuadrante");
}
