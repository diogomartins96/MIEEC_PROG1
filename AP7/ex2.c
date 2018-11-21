#include <stdio.h> 
#include <math.h>


float q(float n)
{
	
	float num, v, cont;
	
	for(num=1, cont=0; num<=n; num++)
		v= 1/(num*num);
		cont= cont+v;
	return cont;
}

float a(float n)
{
	
	float v, num, cont;
	
	for(num=1, cont=0; num<=n; num++)
		v= (pow((-1),(num+1)))*(1/(num*num));
		cont= cont+v;
	
	return cont;
}

main()
{
	float n, x, y;
	
	printf("Introduza um valor: ");
	scanf("%f", &n);

	x=q(n);
	y=a(n);
	
	printf("Q(%.1f)=%.2f\nA(%.1f)=%.4f\n", n, x, n, y);
}
	
