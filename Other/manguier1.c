#include <stdio.h>
#include <stdlib.h>

typedef struct mangue{
	char var;
	char ferme;
	char couleur;
	char tache;
	char a;
}mangue;

typedef struct branche{
	short num;
	mangue tab[3];
	int n_mang;
}branche;

typedef struct manguier{
	branche M[2];
	int n_branche;
}manguier;

int main(int argc, char *argv[]) {

	return 0;
}


