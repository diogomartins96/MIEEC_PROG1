#include <stdio.h>
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
	char str1[20], str2[20];

	while(1)
	{
		printf("Palavra?");
		scanf("%s", str1);
		if(strcmp(".",str1)==0)
		break;
		inverte(str1, str2);
	}

	if(strcmp(str1, str2)==0)
	printf("Resultado:%s é capicua.\n", str1);

	else	
	printf("Resultado:%s não é capicua.\n", str1);

}
