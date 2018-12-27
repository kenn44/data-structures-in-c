#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  char phrase [132];
  int i;
  printf("ecrivez votre phrase");
  gets(phrase);
  printf("%s\n", phrase);
  for(i=0;i<132; i++)
  {
  	if(phrase[i]=='e')
	 {
phrase[i]='\a' ;
	  } 
 }

  printf("la nouvelle phrase est:%s",phrase);
  gets(phrase);
	return 0;
}
