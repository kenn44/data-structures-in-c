#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, z;
	printf ("\t les entiers sont: x=%d, y=%d\n", x, y);
	 x=y= 10;
	 printf ("\t les entiers sont: x=%d, y=%d\n", x, y);
	 z=x++;
	 printf ("\t les entiers sont: x=%d, y=%d, z=%d\n", x, y, z);
	 x=-x;
	 printf ("\t les entiers sont: x=%d, y=%d, z=%d\n", x, y, z);
	 y++;
	 printf ("\t les entiers sont: x=%d, y=%d, z=%d\n", x, y, z);
	 x=x+y-z--;
	 printf ("\t les entiers sont: x=%d, y=%d, z=%d\n", x, y, z);
	 return 0;
}
