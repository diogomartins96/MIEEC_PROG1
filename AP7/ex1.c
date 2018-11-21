#include <stdio.h>

int resto(int dividendo, int divisor)
{
	while(dividendo>= divisor)

		dividendo= dividendo - divisor;
	
	return dividendo;	
}

  
int par(int n);	
{
		
} 

main()
{
	int dividendo, divisor, n;

	printf("Insira o Dividendo e o Divisor: ");
	scanf("%d %d", &dividendo, &divisor);

	printf("Insira um valor: ");
	scanf("%d", &n);

	res=resto(dividendo, divisor);
	

}
