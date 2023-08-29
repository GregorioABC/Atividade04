// Repostas:
// 1.
// 2.
// 3.
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero;
//   printf("Informe um numero : ");
//   scanf("%d",&numero);
//   if(numero>0){
//     printf("O número é positivo");
//   }else if(numero == 0){
//     printf("O número é igual a 0 ");
    
//   }else{
//     printf("O número é negativo");
//   }
//   return 0;
// }
// 4.
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int idade;
//   printf("Informe a sua idade : ");
//   scanf("%d",&idade);
//   if (idade < 18){
//     printf("Você é menor de idade");
//   }else{
//     printf("Você é maior de idade ");
//   }
//   return 0;
// }
// 5.
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int num1;
//   int num2;
//   printf("Informe o 1º número ");
//   scanf("%d",&num1);
//   printf("Informe o 2º número ");
//   scanf("%d",&num2);
//   if(num1>num2){
//     printf("O número 1 é maior que o numero 2 ");
//   }else if(num2>num1){
//     printf("O número 2 é maior que o numero 1 ");
//   }else{
//     printf("Os números são iguais ");
//   }
//   return 0;
// }
//6.
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int num1;
//   int num2;
//   printf("Informe o 1º número ");
//   scanf("%d",&num1);
//   printf("Informe o 2º número ");
//   scanf("%d",&num2);
//   if(num1>num2){
//     printf("O número 1 é maior que o numero 2 ");
//   }else if(num2>num1){
//     printf("O número 2 é maior que o numero 1 ");
//   }else{
//     printf("Os números são iguais ");
//   }
//   return 0;
// }
//7.
//   #include <stdio.h>
//   #include <stdlib.h>
//   int main(void) {
//   float nota1,nota2,nota3;
//   float media;
//   printf("Digite a 1º nota ");
//   scanf("%f",&nota1);
//   printf("Digite a 2º nota ");
//   scanf("%f",&nota2);
//   printf("Digite a 3º nota ");
//   scanf("%f",&nota3);
  
//   media=(nota1 +nota2 + nota3)/3;
//   if(media<7){
//     printf("O aluno está reprovado e tem %.2f de média",media);
//   }else{
//     printf("O aluno está aprovado e tem %.2f de média",media);
//   }
//   return 0;
// }
//8.
// #include <stdio.h>
//   #include <stdlib.h>
//   int main(void) {
//     char nome1[100];
//     char nome2[100];
//     printf("Digite o primeiro nome ");
//     scanf("%s",nome1);
//     printf("Digite o segundo nome");
//     scanf("%s",nome2);

//     int tamanho_nome1=strlen(nome1);
//     int tamanho_nome2=strlen(nome2);
//     if (tamanho_nome1 > tamanho_nome2) {
//     printf("%s tem o maior número de caracteres.\n", nome1);
//     } else if (tamanho_nome2 > tamanho_nome1) {
//         printf("%s tem o maior número de caracteres.\n", nome2);
//     } else {
//         printf("Ambos os nomes têm o mesmo número de caracteres.\n");
//     }

//     return 0;
// }
//9.
//   #include <stdio.h>
//   #include <stdlib.h>
//   int main(void){
//   char caractere;
//     printf("Digite um caractere: ");
//     scanf("%c", &caractere);
//     if (caractere == 'a' || caractere == 'A' || 
//         caractere == 'e' || caractere == 'E' ||
//         caractere == 'i' || caractere == 'I' ||
//         caractere == 'o' || caractere == 'O' ||
//         caractere == 'u' || caractere == 'U') {
//         printf("O caractere digitado é uma vogal.\n");
//     }
//     else if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
//         printf("O caractere digitado é uma consoante.\n");
//     }
//     else {
//         printf("O caractere digitado não é uma letra.\n");
//     }
//     return 0;
// }
//10.
//  #include <stdio.h>
//  #include <stdlib.h>
//  int main(void){
    // int num1,num2,num3;
    //  printf("Digite o primeiro número: ");
    // scanf("%d", &num1);

    // printf("Digite o segundo número: ");
    // scanf("%d", &num2);

    // printf("Digite o terceiro número: ");
    // scanf("%d", &num3);
    // if (num1 > num2) {
    //     int temp = num1;
    //     num1 = num2;
    //     num2 = temp;
    // }
    // if (num2 > num3) {
    //     int temp = num2;
    //     num2 = num3;
    //     num3 = temp;
    // }
    // if (num1 > num2) {
    //     int temp = num1;
    //     num1 = num2;
    //     num2 = temp;
    // }
    // printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);
    // return 0;
// }
//11.
//  #include <stdio.h>
//  #include <stdlib.h>
//  int main(void){
    // float peso, altura;
    // float imc;
    // printf("Digite o peso (em kg): ");
    // scanf("%f", &peso);
    // printf("Digite a altura (em metros): ");
    // scanf("%f", &altura);
    // imc = peso / (altura * altura);
    // printf("O IMC calculado é: %.2f\n", imc);
    // if (imc < 18.5) {
    //     printf("Categoria: Abaixo do peso\n");
    // } else if (imc < 24.9) {
    //     printf("Categoria: Peso normal\n");
    // } else if (imc < 29.9) {
    //     printf("Categoria: Sobrepeso\n");
    // } else if (imc < 34.9) {
    //     printf("Categoria: Obeso\n");
    // } else {
    //     printf("Categoria: Muito obeso\n");
    // }
    // return 0;
//}
