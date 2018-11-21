#include <stdio.h>

main()
{
	float v[4][4];
	int n, i;
	
	while(n<4)
	{
		printf("Número do aluno %d: ", n+1);
		scanf("%f", &v[n][0]);
		
		printf("Nota 1 do aluno %.0f: ",v[n][0]);
		scanf("%f", &v[n][1]);
		
		printf("Nota 2 do aluno %.0f: ", v[n][0]);
		scanf("%f", &v[n][2]);
		
		v[n][3] = ((v[n][1]+v[n][2])/2);
		n++;
		
		putchar('\n');
	}
		
		n=0;
		printf("Numero Nota1 Nota2 Media\n");
		
		while(n<=3)
		{
			printf("%.0f %.2f %.2f %.2f \n", v[n][0], v[n][1], v[n][2], v[n][3] );
			n++;
		}
