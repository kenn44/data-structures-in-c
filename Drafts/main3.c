#include <stdio.h>
#include <stdlib.h>
#include "entete1.h"

int heures, minutes, secondes; 
/*static int permet d'empecher l'acces des variables globales dans les autres fichiers*/
/*void print_heure (void);
void set_heures(int , int , int );
void tick (void);*/

int main(int argc, char *argv[]) {
	int h, m, s;
	printf("Entrez l'heure, la minute et la seconde\n");
	scanf("%d%d%d", &h, &m, &s);
	while (h>24 || m>59 || s>59)
	{
		printf("Veillez entrer une valeur valide\n");
		scanf("%d%d%d", &h, &m, &s);
	}
	set_heures(h, m, s);
	print_heure();
	tick();
	print_heure();
	return 0;
}

/*void print_heure (void)
{
	printf("Il est %d heure(s), %d minutes(s), %d seconde(s)\n", heures, minutes, secondes);
}

void set_heures(int h, int m, int s)
{
	heures = h;
	minutes = m;
	secondes = s;
	printf("Il est %d heure(s), %d minutes(s), %d seconde(s)\n", h, m, s);
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
}*/
