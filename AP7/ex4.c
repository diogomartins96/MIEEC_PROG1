#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y;
	char op;
	
	x=rand()%100;
	y=rand()%100;
	
	printf("Soma(+) ou multiplicação(*): ");
	scanf(" %c", &op);

	switch(op)	
	{
		case '*':
		case 'x':
		case 'X': printf("%d %c %d?\n", x, op, y); break;
		
		case '+': printf("%d %c %d?\n", x, op, y); break;
		
		default: printf("Erro.\n");
	}
}
