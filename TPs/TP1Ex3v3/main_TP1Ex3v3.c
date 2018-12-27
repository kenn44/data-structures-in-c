#include <stdio.h>
#include <stdlib.h>

//int heures = 0, minutes = 0, secondes = 0; 
/*static int permet d'empecher l'acces des variables globales dans les autres fichiers*/
void print_heure (int *, int *, int *);
void set_heures(int *, int *, int *);
void tick (int *, int *, int *);

int main(int argc, char *argv[]) {
	int heures = 0, minutes = 0, secondes = 0;
	printf("Entrez l'heure, la minute et la seconde\n");
	
	set_heures(&heures, &minutes, &secondes);
	print_heure(&heures, &minutes, &secondes);
	tick(&heures, &minutes, &secondes);
	print_heure(&heures, &minutes, &secondes);
	return 0;
}

void print_heure (int *h, int *m, int *s)
{
	printf("Il est %d heure(s), %d minutes(s), %d seconde(s)\n", *h, *m, *s);
}

void set_heures(int *h, int *m, int *s)
{
	scanf("%d%d%d", h, m, s);
	while (*h>24 || *m>59 || *s>59)
	{
		printf("Erreur, veillez entrer une valeur valide\n");
		scanf("%d%d%d", h, m, s);
	}
}

void tick (int *h, int *m, int *s)
{
	(*s)++;
	if((*s)==60)
	{
		(*s) = 0;
		(*m)++;
	}
	
	if((*m)==60)
	{
		(*m) = 0;
		(*h)++;
	}
	
	if((*h)==24)
	{
		(*h) = 0;
	}
}

