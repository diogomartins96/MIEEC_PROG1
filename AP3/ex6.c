#include <stdio.h>
main()
{
   int ano, resto1, resto2, resto3;
	printf("Indique o ano:");
	scanf("%d", &ano);
	resto1= ano%4;
	resto2= ano%100;
	resto3= ano%400;
	if(resto1==0)
		if(resto2==0)
			if(resto3==0)
				printf("O ano é bissexto");
			else
				printf("O ano não é bissexto");
		else
			printf("O ano é bissexto");
	else
		printf("O ano não é bissexto");
}
