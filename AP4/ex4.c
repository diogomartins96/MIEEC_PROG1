#include <stdio.h>
main()
{
	int a,y, x;
	printf("Altura?");
	scanf("%d", &a);
	
	for(x=1;x<=a;x++)
	{
		for(y=1;y<=a;y++)
		{
			if(y%5 ==0 || x==5)
			printf("*");
			else
			printf(" ");
		}
	}
}
