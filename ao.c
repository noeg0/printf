#include <stdio.h>
#include <stdlib.h>



void k() {
	int x;
	*(&x+2) -=44;
}
void main() {
	int x;
	x = 0;
	printf("%d\n",++x);
	if(x>=10)
    		exit(0);
	k();
}
