#include <stdio.h>

void ordena(float notas[][2], int N)
{

	int passo=0, imax, i, aux1, aux2;

	while(passo<N-1)
	{
		imax=passo;
		i=passo+1;
		
		while (i<N)
		{
			if(notas[i][1]>notas[imax][1])
			imax=i;
			i++;
		}
		
		if(imax!=passo)
		{
			aux1=notas[passo][0];
			aux2=notas[passo][1];
			notas[passo][0]=notas[imax][0];
			notas[passo][1]=notas[imax][1];
			notas[imax][0]=aux1;
			notas[imax][1]=aux2;
		}
		passo++;
	}
}

main()
{
	int v[4][4], i=0, n=1, N=4;
	float media[4], notas[N][2];

	while(i<4)
	{
		//printf("Número do aluno %d: ", n=i+1);
		scanf("%d", &v[i][0]);

		//printf("Nota 1 do aluno %d: ", v[i][0]);
		scanf("%d", &v[i][1]);
	
		//printf("Nota 2 do aluno %d: ", v[i][0]);
		scanf("%d", &v[i][2]);

		media[i]=((v[i][1])+(v[i][2]))/2.0;
	
		notas[i][0]=v[i][0];
		notas[i][1]=media[i];

		i++;
	}

	ordena(notas, N);
	printf("Número Médio\n");

	for(i=0; i<4;i++)
	printf("%.0f %.1f\n", notas[i][0], notas[i][1]);

}
