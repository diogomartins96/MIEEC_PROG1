#include <stdio.h>
#include <string.h>

main()
{
	char str[100], maiorp[20];
	int maxlen=0, totallen=0, npalavras=0;
	puts("Escreva uma frase: ");

	while(1)
	{
	scanf("%s", str);
	if (*str=='.')
	break;

	totallen+=strlen(str);
	npalavras++;

	if(strlen(str)>maxlen)
		{
			maxlen=strlen(str);
			strcpy(maiorp,str);
		}
	}

printf("Numero de palavras: %d\n", npalavras);
printf("Palavra maior: %s\n", maiorp);
printf("Comprimento medio: %.1f\n", totallen/(float)npalavras);

}
