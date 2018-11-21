#include <stdio.h>

void mulher (float altura) 
{ 
float pim;
	pim = ( (62.1*altura)-44.7);
	printf("O peso ideal seria %.2f\n", pim);
}
void homem ( float altura) 
{
float pih;
	pih = ( (72.7*altura)-58);
	printf("O peso ideal seria %.2f\n", pih);
}	
main()
{
	
	char M, H, sexo;
	float altura, peso;
	
	printf("Qual é a altura?");
	scanf("%f", &altura);
		
	printf("Insira o sexo:\n");
	scanf(" %c " , &sexo);
		
		if (sexo=='M') 
		{
		homem(altura);
		}
		else 
		{
		mulher(altura);
		}
}
