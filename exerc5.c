//05) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).'


#include<stdio.h>

int main()
{
  int num, maior = 0, menor = 0, i=0;
 
    printf("\n");
    scanf("%d",&num);
   
  menor = num;
  maior = num;
 
  for(i = 1; i < 10; i++ ){
   
    printf("\n");
    scanf("%d",&num);
 
    if(num > maior) maior = num;
    if(num < menor) menor = num;
   
  }

  printf ("%d\n", maior);
 
  return 0;
 
}