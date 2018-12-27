#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	char mot[30];
	char*adr;
	int i, a;
	printf("ecrivez un mot");
	gets(mot);
	printf("%s\n",mot);
	/*adr=mot;
	a = strlen(adr);
	printf("%d",a);
	for(i=0;i<30;i++)
	{
		mot[i]=mot[a-2-i];
	}*/
	strrev(mot);
	printf("le mot a l'envers est:%s\n",mot);
	return 0;
}
