//03) Faça um programa que apresente os números de pares de 0 a 20, cada número em uma linha.'

#include <stdio.h>

int main(){   
int i;

  while (i <= 20) {
      if (i % 2 == 0) {
      printf("%d\n", i);
  }
  i = i + 1;
  }

}