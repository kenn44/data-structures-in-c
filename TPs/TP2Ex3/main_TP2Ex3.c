#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	char mot[30];
	printf("Entrer un mot\n");
	gets(mot);
	printf("%s\n",mot);
	strrev(mot);
	printf("Ce mot a l'envers est:%s\n",mot);
	return 0;
}

