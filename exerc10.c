/*E14) Faça uma função isBit que receba dois parâmetros (nro e bit), a função deve retornar FALSO (0) se o n-bit estiver com valor 0 ou, no caso contrário, retornar VERDADEIRO.
Complemente o código abaixo:
int isBit(int nro, int bit) { >complemente o código< }
int main(void) { int num,bit; scanf("%d %d",&num,&bit); printf("%d\n", isBit(num,bit) ); }*/


#include <stdio.h>
#include <stdbool.h>

int isBit(int nro, int bit)
{
if ((bit | (nro - 1) == 0)) {
    return 0;
} else {
    return 1;
}
}

int main(void) {
int num,bit;
bool i;

scanf("%d %d",&num,&bit);
printf("%d\n", isBit(num,bit) );
}