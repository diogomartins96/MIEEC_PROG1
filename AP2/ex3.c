#include <stdio.h>

main()
{
	int x,y,resto;
 	printf("Digite um nº inteiro, x:");
 	scanf("%d", &x);
 	printf("Digite outro nº inteiro, y:");
 	scanf("%d", &y);
 	printf("Resto da divisão %d / %d = %d\n", x, y, x%y);
 if(x%y==0)
  	printf(" o número y é múltiplo de x\n");
 else
 	printf(" o número y não é múltiplo de x\n");
 return 0;
}
