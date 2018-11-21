#include<stdio.h>

int procuraTodos(int v[], int N, int x, int posicoes[], int*nPosicoes);

main()
{
	int v[15], x, posicoes[15], nPosicoes=0, i;

	for(i=0; i<15; i++)
	{
		printf("Insira um valor para armazenar no vetor: ");
		scanf("%d", &v[i]);
	}

	printf("Insira o valor a procurar no vetor: ");
	scanf("%d", &x);

	if(procuraTodos(v, 15, x, posicoes, &nPosicoes)==0)
	printf("Não foi encontrado o valor %d no vetor", x);
	else
	{
		printf("O valor %d foi encontrado %d vezes no vetor nas posições", x, nPosicoes );
		for(i=0; i<nPosicoes; i++)
		printf(" %d,", posicoes[i]);
	}

}

int procuraTodos(int v[], int N, int x, int posicoes[], int*nPosicoes)
{
	int i, j=0;
	for(i=0; i<N; i++)
	{
		if (v[i]==x)
		{
			posicoes[*nPosicoes]=i;
			*nPosicoes=*nPosicoes+1;
		}
	}

	if(*nPosicoes>0)
	return 1;
	else
	return 0;
}
