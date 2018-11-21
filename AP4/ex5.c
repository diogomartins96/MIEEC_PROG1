#include <stdio.h>
main()
{
    int num, x=2;
	printf("Insira um inteiro para fatorizar:");
	scanf("%d", &num);
	 while(x<num)
	 {
		if(num%x==0)
		{
			num/=x;
			printf("%d ", x);
			x=2;
		}
		else
		x++;
	}
	printf("%d\n", x);
}
