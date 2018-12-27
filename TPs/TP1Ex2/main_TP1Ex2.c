#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	void permuter(int *, int *);
	int X = 10;
	int Y = 20;
	printf("Le contenu des variables est : X = %d et Y = %d\n", X, Y);
	permuter(&X, &Y);
	printf("Le contenu des variables est : X = %d et Y = %d\n", X, Y);
	return 0;
}

void permuter(int *a, int *b) //pasage par adresse
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
/* ne fonctionne pas
int main(int argc, char *argv[]) {
	void permuter(int , int );
	int X= 10;
	int Y= 20;
	printf("\t le contenu des variables est : X = %d et Y = %d\n", X, Y);
	permuter(X, Y);
	printf("\t le contenu des variables est : X = %d et Y = %d\n", X, Y);
	return 0;
}

void permuter(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
*/

