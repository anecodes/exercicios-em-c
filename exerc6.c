//06) Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.'


#include<stdio.h>

int main()
{
  int num;


 
  do {
   
    scanf("%d",&num);
 
    if (num%2 != 0) {
        printf("%d impar\n",num);
    }  else
    if (num%2 == 0 && num != 0) {
        printf("%d par\n",num); 
    } 
   
  } while (num != 0);
  
}