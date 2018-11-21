#include <stdio.h>
main()
{
   float altura;
	printf(" Qual a altura da pessoa?");
	scanf("%f", &altura);
	if(altura<1.30) 
              printf("Esta pessoa é baixissima");
	if(altura>=1.30 && altura <1.60) 
              printf("Esta pessoa é baixa");
	if(altura>=1.60 && altura< 1.75) 
              printf("Esta pessoa é mediana");
	if(altura>=1.75 && altura<1.90) 
                 printf("Esta pessoa é alta");
	if(altura>=1.90)
             printf("Esta pessoa é altissima");
}
	
