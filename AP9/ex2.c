#include <stdio.h>

	int contaRepeticao(int v[], int TamanhoVetor, int numero)
	{

		int contador_M=0,contador=0,i;
		
		for(i=1;i<=TamanhoVetor;i++)
		{
			if(v[i]==numero)
			{
				contador++;
					if(contador>contador_M) contador_M=contador;
			}
			else
			{
				contador=0;
			}
		}
		return contador_M;

	}

	main()
	{
		int num,num_pes,n=0;
		int v[100]={0};

		printf("Introduza um numero: ");
		scanf("%d",&num);

		while(num>=0)
		{
			v[n]=num;
			n++;
		
			printf("Introduza um numero: ");
			scanf("%d",&num);
		}

		printf("Numero a pesquisar: ");
		scanf("%d",&num_pes);

		printf("Maior sequencia com numeros %d tem tamanho %d\n",num_pes,contaRepeticao(v,n,num_pes));
	}
	
	
