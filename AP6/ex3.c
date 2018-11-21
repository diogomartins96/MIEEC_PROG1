#include <stdio.h>

void operacoes (int n1,int n2)
{

	printf("%d+%d=%d\n", n1, n2, n1+n2);
	printf("%d-%d=%d\n", n1, n2, n1-n2);
	printf("%d*%d=%d\n", n1, n2, n1*n2);
	printf("%d/%d=%d\n", n1, n2, n1/n2);
	printf("%d%%%d=%d\n", n1, n2, n1%n2);
	printf("%d+%d=%d\n", n2, n1, n2+n1);
	printf("%d-%d=%d\n", n2, n1, n2-n1);
	printf("%d*%d=%d\n", n2, n1, n2*n1);
	printf("%d/%d=%d\n", n2, n1, n2/n1);
	printf("%d%%%d=%d\n", n2, n1, n2%n1);

	
}
main()
{
int n1,n2;
	printf("Introduza 2 valores:\n", n1, n2);
	scanf("%d %d", &n1, &n2);
	operacoes(n1,n2);
}	
