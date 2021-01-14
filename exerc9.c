/*E13) Faça uma função resetBit que receba dois parâmetros (nro e bit), a função deve modificar o valor de nro de tal forma que o n-bit seja modificado para 0 e retornar o novo valor.
Complemente o código abaixo:
int resetBit(int nro, int bit) { >complemente o código <}
int main(void) { int num,bit; scanf("%d %d",&num,&bit); printf("%d\n",resetBit(num,bit)); }*/

#include <stdio.h>

int bit_reset(int nro, int bit)
{
 return (bit | (nro - 1));
}

int main(void) {
int num,bit;
scanf("%d %d",&num,&bit);
printf("%d\n",bit_reset(num,bit));
}
