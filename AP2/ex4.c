#include <stdio.h>

main()
{
	float num, ptdecimal, z;
	z=3;
	printf("Insira um número: ");
	scanf("%f", &num);
	printf(" Numero com 3 casas decimais = %.3f\n", num);
	printf(" Parte inteira = %d\n", (int)num);
	ptdecimal=num-z;
	printf(" Parte decimal = %f\n", ptdecimal);
}
