#include <stdio.h>
main()
{
   int num, x, y;
	printf("Insira um nº de 3 digitos:");
	scanf("%d", &num);
 	x= num/100;
	y= num%10;
	if(x==y)
		printf("o número é capicua");
	   else 
              printf("o número não é capicua");
}
		
	
