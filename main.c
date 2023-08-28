#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int num1;
  int num2;
  printf("Informe o 1º número ");
  scanf("%d",&num1);
  printf("Informe o 2º número ");
  scanf("%d",&num2);
  if(num1>num2){
    printf("O número 1 é maior que o numero 2 ");
  }else if(num2>num1){
    printf("O número 2 é maior que o numero 1 ");
  }else{
    printf("Os números são iguais ");
  }
  return 0;
}