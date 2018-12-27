#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char v [26]={0}, *j[6]={"je", "tu", "il", "nous", "vous", "ils"}, *t[6]={"e", "es", "e", "ons", "ez", "ent"};
	int l = 0, i = 0;
	printf ("Entrer un verbe du 1er goupe:\n");
	gets(v);
	l = strlen(v);
	while((v[l-2]!='e')||(v[l-1]!='r'))
	{
		printf("Erreur. Entrer un verbe du 1er goupe:\n");
		gets(v);
	}
	
	for (i = 0; i < 7; i++)
	{
		v[l-2]='\0';
		printf("%s %s\n", j[i], strcat(v, t[i]));
	}
	return 0;
}

