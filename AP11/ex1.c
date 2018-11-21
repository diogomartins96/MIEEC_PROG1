#include stdio.h
#include <string.h>

void inverte(char *strOriginal, char *strInvertida)
{
	int i=0, v=strlen(strOriginal)-1;

	for(i=0; i<strlen(strOriginal); i++)
	{
		strInvertida[i]=strOriginal[v];
		v--;
	}

 strInvertida[i++]='\0';
}


main()
{
	char str1[100], str2[100];

	printf("Introduza uma frase:");
	gets(str1);

	inverte(str1, str2);

	printf("A frase invertida é: %s\n", str2);

}
