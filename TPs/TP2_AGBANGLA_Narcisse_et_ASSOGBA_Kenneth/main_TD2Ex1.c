#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  char phrase [132];
  int i,j;
  j =0;
  printf("Entrer votre phrase\n");
  gets(phrase);
  printf("%s\n", phrase);
  for(i=0;i<132; i++)
  {
  	if(phrase[i]=='e')
	 {
	  j++;
	  }
 }

  printf("Le nombre de 'e' est:%d\n",j);

  return 0;
}

