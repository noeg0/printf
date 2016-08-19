//Mehmet Ali BAYHAN
#include <stdio.h>
#include <stdlib.h>
void k(void)
{
	int x;
	*(&x+2) -= 34;
}
void main(void)
{
	int x;
	x=0;
	printf("X=%d\n", ++x);
	if (x >= 10) {
        return;
    	}
	k();

}
