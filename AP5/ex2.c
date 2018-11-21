#include <stdio.h>

main ()
{
 char c;
 int na=0, ne=0, ni=0, no=0, nu=0;
 printf ("Qual e' a frase?\n");
 while (c!='.')
 {
	scanf ("%c", &c);
 	switch(c)
 	{
	case 'a':
	case 'A': na++; break;
	case 'e':
	case 'E': ne++; break;
	case 'i':
	case 'I': ni++; break;
	case 'o':
	case 'O': no++; break;
	case 'u':
	case 'U': nu++; break;
	}
 }
 printf (" A %d\n E %d\n I %d\n O %d\n U %d\n", na, ne, ni, no, nu);
}
