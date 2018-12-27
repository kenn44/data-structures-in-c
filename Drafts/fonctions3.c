#include <stdio.h>
#include <stdlib.h>

void print_heure (void)
{
	extern int heures, minutes, secondes;
	printf("Il est %d heure(s), %d minutes(s), %d seconde(s)\n", heures, minutes, secondes);
}

void set_heures(int h, int m, int s)
{
	extern int heures, minutes, secondes;
	heures = h;
	minutes = m;
	secondes = s;
	printf("Il est %d heure(s), %d minutes(s), %d seconde(s)\n", h, m, s);
}

void tick (void)
{
	extern int heures, minutes, secondes;
	secondes++;
	if(secondes==60)
	{
		secondes = 0;
		minutes++;
	}
	
	if(minutes==60)
	{
		minutes = 0;
		heures++;
	}
	
	if(heures==24)
	{
		heures = 0;
	}
}
