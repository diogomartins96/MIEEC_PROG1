#include <stdio.h>
main()
{
   int num1, num2, num3;
   printf("Insira o 1ºnumero");
	scanf("%d", &num1);
   printf("Insira o 2ºnumero");
	scanf("%d", &num2);
   printf("Insira o 3ºnumero");
	scanf("%d", &num3);
	if (num1 < num2)
		if(num1 < num3)
			if(num2 <num3)
				printf("%d %d %d\n", num1, num2, num3);
			else 
				printf("%d %d %d\n", num1, num3, num2);
		else 
			printf(" %d %d %d\n", num3, num1, num2);
	else	
		if(num2< num3)
			if(num1< num3)
				printf("%d %d %d\n", num2, num1, num3);
			else
				printf("%d %d %d\n", num2, num3, num1);
		else
			printf("%d %d %d\n", num3, num2, num1);
}
