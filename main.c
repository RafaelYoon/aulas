/*Exercício 3: Escreva um programa que calcula a diferença entre o maior número informado e o menor número informado.*/

#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("Escreva um programa que calcula a diferença entre o maior número informado e o menor número informado\n");
  printf("Digite número 1: ");
  scanf("%d", &num1);
  printf("Digite número 2: ");
  scanf("%d", &num2);

  if (num1>num2)
    printf("Diferença: %d", num1 - num2);    
  else 
    printf("Diferença: %d", num2 - num1);    
  
  return 0;
}