#include <stdio.h>
#include <stdlib.h>

void print_heure (void)
{
	printf("Il est %d heure(s), %d minutes(s), %d seconde(s)\n", heures, minutes, secondes);
}

void set_heures(int h, int m, int s)
{
	scanf("%d%d%d", &h, &m, &s);
	while (h>24 || m>59 || s>59)
	{
		printf("Erreur, veillez entrer une valeur valide\n");
		scanf("%d%d%d", &h, &m, &s);
	}
	heures = h;
	minutes = m;
	secondes = s;
	//printf("Il est %d heure(s), %d minutes(s), %d seconde(s)\n", h, m, s);
}

void tick (void)
{
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
