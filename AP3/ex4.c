#include <stdio.h>
main()
{
	float x, y;
	char op;
	
	printf("Insira um operador:");
	scanf("%f", &x);
	printf("Insira outro operador:");
	scanf("%f", &y);
	printf("Qual é a expressao? ");
	scanf(" %c", &op);
		switch(op) {
		case '+':
			printf("Resultado= %f\n", x + y);break;
		case '-':
			printf("Resultado= %f\n", x - y); break;
		case '/':
			printf("Resultado= %f\n", (float) x / y);break;
		case '*':
		case 'x':
			printf("Resultado= %f\n", x * y);
		}
} 
