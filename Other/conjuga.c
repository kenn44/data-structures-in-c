#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char verb[20];
	char sorti[36];
	int l;

	printf("Entrer le verbe:");
	gets(verb);
	l=strlen(verb);
	if((verb[l-2]!='e')||(verb[l-1]!='r'))	{

	puts("\aCe n'est pas un verbe du premier groupe.");	}
	else
	{
		verb[l-2]='\0';
		sorti[0]='\0';
		if(verb[0]=='e','a','o','u')
		{
		strcat(sorti, "j' ");
		strcat(sorti, verb);
		strcat(sorti, "e");
		puts(sorti);	}
		
		else {
	
		strcat(sorti, "je ");
		strcat(sorti, verb);
		strcat(sorti, "e");
		puts(sorti);	}
		
			sorti[0]='\0';
		strcat(sorti, "tu ");
		strcat(sorti, verb);
		strcat(sorti, "es");
		puts(sorti);
		
			sorti[0]='\0';
		strcat(sorti, "il ");
		strcat(sorti, verb);
		strcat(sorti, "e");
		puts(sorti);
		
			sorti[0]='\0';
		strcat(sorti, "nous ");
		strcat(sorti, verb);
		strcat(sorti, "ons");
		puts(sorti);
		
			sorti[0]='\0';
		strcat(sorti, "vous ");
		strcat(sorti, verb);
		strcat(sorti, "ez");
		puts(sorti);
		
			sorti[0]='\0';
		strcat(sorti, "ils ");
		strcat(sorti, verb);
		strcat(sorti, "ent");
		puts(sorti);
	}
	

	return 0;
}
