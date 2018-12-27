#include <stdio.h>
#include <stdlib.h>
#include "entete.h"
int heures = 0, minutes = 0, secondes = 0; 
/*static int permet d'empecher l'acces des variables globales dans les autres fichiers*/
void print_heure (void);
void set_heures(int , int , int );
void tick (void);

int main(int argc, char *argv[]) {
	//int heures = 0, minutes = 0, secondes = 0;
	printf("Entrez l'heure, la minute et la seconde\n");
	
	set_heures(heures, minutes, secondes);
	print_heure();
	tick();
	print_heure();
	return 0;
}




