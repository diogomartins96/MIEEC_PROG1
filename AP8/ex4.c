#include <stdio.h>

int *vmaior (int *v1, int *v2)
{
	if(*v1>*v2)
		return v1;
	if(*v2<*v1)
		return v2;
	//if(*v1=*v2)
		
		
}

main()
{

	int a, b, *v1, *v2;
	
	printf("Introduza 2 valores:");
	scanf("%d %d", &a, &b);
	
	v1=&a;
	v2=&b;
		
	printf("Endereço do maior é %p e o conteúdo é %d\n", vmaior, *vmaior(*v1, *v2));
}	

