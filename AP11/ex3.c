#include <stdio.h>


int multiplicacao(int primeiro_numero, int segundo_numero)
{
	if(segundo_numero>0)
	return primeiro_numero+multiplicacao(primeiro_numero, segundo_numero-1);

	else
		return 0;
}

main()
{
	int num1, num2;

	printf("Introduza dois nÃºmeros:");
	scanf("%d %d", &num1, &num2);

	printf("%d * %d = %d\n", num1, num2, multiplicacao(num1, num2));

}
