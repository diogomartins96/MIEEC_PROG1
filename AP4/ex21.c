#include <stdio.h>
main()
{
	int num, cont=0, total=0;
	
	scanf("%d", &num);
	while(num!= -1)
	{ 
		total = total + num;
		cont = cont +1;
		scanf("%d", &num);
	}
	printf("Média = %.2f\n", (float)total/cont);
}
