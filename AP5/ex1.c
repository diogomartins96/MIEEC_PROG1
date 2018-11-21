#include <stdio.h>

main ()
{
	float pa, pb, anos=0, ta, tb;
	printf ("País B(pop/taxa):\n");
	scanf ("%f %f", &pb, &tb);
	printf ("País A(pop/taxa):\n");
	scanf ("%f %f", &pa, &ta);
	ta=ta/100;
	tb=tb/100;
	while (pa>pb)
	{
		pa=pa+(ta*pa);
		pb=pb+(tb*pb);
		anos=anos+1;
	}
	printf ("População de B ultrapassará a de A em %.1f anos\n", anos);
}
