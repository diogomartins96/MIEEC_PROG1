#include <stdio.h>


int mdc(int x, int y)
{
	if (y == 0) return x;
	else return mdc(y, x%y);
}


main()
{
	int num1, num2;
	puts("Introduza os números (1º 2º)");
	scanf("%d %d", &num1, &num2);
	printf("MDC entre %d e %d = %d", num1, num2, mdc(num1,num2));

}
