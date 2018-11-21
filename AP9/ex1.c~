#include <stdio.h>
#define SIZE 6

void histograma(int n_lancamentos, int face)
{
	int i;
	printf("%d -",face);

	
	for(i=1;i<=n_lancamentos;i++)
	{
		printf("*");
	}
	
	putchar('\n');
}


main()
{
	int lancamentos, i;
	
	int faces[7]={0};

		for(i=1;i<=30;i++)
		{
			lancamentos=1+rand()%6;
			faces[lancamentos]++; //não inclui o 0 no vetor;
		}

	
	printf("Histograma de 30 Lançamentos\n");
	
	histograma(faces[1],1);
	histograma(faces[2],2);
	histograma(faces[3],3);
	histograma(faces[4],4);
	histograma(faces[5],5);
	histograma(faces[6],6);
}
