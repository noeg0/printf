#include <stdio.h>
#include <stdlib.h>

void k(void) {
  int x,y;
static int d = 0;
  if(++d >= 2) 
    exit(0);
 *(&x + 4) -= 31;

}

void main () {
  int x, y = 0;
  x = 0;
  printf("selam %d\n", y++);
  k();
  x = 1;
  printf("X=%d\n", x);
}

