#include <stdio.h>
#include <stdlib.h>

//Ecrire un programme C qui affiche la valeur des variables x, y et z après la séquence d'opérations suivante

int main(int argc, char *argv[]) 
{
	 int x = 0, y = 0, z = 0;
	 printf ("Les entiers sont: x=%d, y=%d\n", x, y);
	 x = y = 10;
	 printf ("Les entiers sont: x=%d, y=%d\n", x, y);
	 z = x++;
	 printf ("Les entiers sont: x=%d, y=%d, z=%d\n", x, y, z);
	 x = -x;
	 printf ("Les entiers sont: x=%d, y=%d, z=%d\n", x, y, z);
	 y++;
	 printf ("Les entiers sont: x=%d, y=%d, z=%d\n", x, y, z);
	 x = x + y - z--;
	 printf ("Les entiers sont: x=%d, y=%d, z=%d\n", x, y, z);
	 return 0;
}

