// 01) Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária.'

#include <stdio.h>

int main(){   
float num;
  scanf("%f", &num);
  printf("%d\n",(int) num);
  printf("%f\n", num - ((int)num));

}
