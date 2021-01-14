/*08) Faça um programa que faça a operação de swap entre as variáveis x e y, sem o uso de uma terceira variável, utilizando apenas operadores aritméticos.
Complemente o código abaixo:
int main( void ) { int x=5, y=-10; printf("x=%d y=%d\n",x,y);  >complemente este código< printf("x=%d y=%d\n",x,y); } */

#include <stdio.h>

void swap (int*, int*);
int main (void)
{
  int x = 5, y = -10;
  printf ("x=%d y=%d\n", x, y);
  swap(&x, &y);
  printf ("x=%d y=%d\n", x, y);
  return 0;
}
void swap (int *w, int *z){
 int tmp;
 tmp = *w;
 *w = *z;
 *z = tmp;
} 
