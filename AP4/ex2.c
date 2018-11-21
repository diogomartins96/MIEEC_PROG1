#include <stdio.h>
main()
{
	int num, cont=0, total=0;
	
	while(num!=EOF)
	{
		scanf("%d", &num);
		total = total + num;
		cont = cont +1;
	}
	return(num=0);
	printf("Média = %.2f\n", (float)total/cont);
}
