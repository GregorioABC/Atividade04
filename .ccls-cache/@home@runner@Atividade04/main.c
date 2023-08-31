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
    //     printf("Categoria: Peso normal");
    // } else if (imc < 29.9) {
    //     printf("Categoria: Sobrepeso");
    // } else if (imc < 34.9) {
    //     printf("Categoria: Obeso");
    // } else {
    //     printf("Categoria: Muito obeso");
    // }
    // return 0;
//}
//12.
// #include <stdio.h>
// #include <stdlib.h>
// int main(void){
//   int numero_mes;
//   printf("Digite o número do mês desejado : ");
//   scanf("%d",&numero_mes);
//   if(numero_mes < 1 && numero_mes >12 ){
//     printf ("Informe um valor de 1 até 12 ");
//   }else{
//     switch (numero_mes) {
//         case 1:
//             printf("Janeiro");
//             break;
//         case 2:
//             printf("Fevereiro");
//             break;
//         case 3:
//             printf("Março");
//             break;
//         case 4:
//             printf("Abril");
//             break;
//         case 5:
//             printf("Maio");
//             break;
//         case 6:
//             printf("Junho");
//             break;
//         case 7:
//             printf("Julho");
//             break;
//         case 8:
//             printf("Agosto");
//             break;
//         case 9:
//             printf("Setembro");
//             break;
//         case 10:
//             printf("Outubro");
//             break;
//         case 11:
//             printf("Novembro");
//             break;
//         case 12:
//             printf("Dezembro");
//             break;
//     }
//     return 0;
//   }
// }
//13.
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//   float salario, aumento;
//   printf("Informe o seu salario : ");
//   scanf("%f",&salario);
//   if(salario> 1500){
//     aumento= ((salario*10)/100)+salario;
//     printf("Seu novo salario será de %.2f",aumento);
//   }else{
//     aumento =((salario*15)/100)+salario;
//     printf("Seu novo salario será de %.2f",aumento);
//   }
//   return 0;
// }
// 14.
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//   int numero;
//   printf("Informe o número : ");
//   scanf("%d",&numero);
//   if (numero % 3== 0 && numero % 5 == 0 ){
//     printf("É divisivel por 3 e 5 ");
//   }else {
//     printf("Não é divisivel por 3 e 5");
//   }
//   return 0;
// }
// 15.
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//   char diasemana [100];
//   printf("Informe o dia da semana por extenso");
//   scanf("%s",diasemana);
//       for (int i = 0; i < strlen(diasemana); i++) {
//         diasemana[i] = tolower(diasemana[i]);
//     }

//     if (strcasecmp(diasemana, "segunda-feira") == 0 || strcasecmp(diasemana, "terça-feira") == 0 ||
//         strcasecmp(diasemana, "quarta-feira") == 0 || strcasecmp(diasemana, "quinta-feira") == 0 ||
//         strcasecmp(diasemana, "sexta-feira") == 0) {
//         printf("É um dia útil.\n");
//     } else if (strcasecmp(diasemana, "sábado") == 0 || strcasecmp(diasemana, "domingo") == 0) {
//         printf("É um fim de semana.\n");
//     } else {
//         printf("Dia da semana inválido.\n");
//     }
//     return 0;
// }
// 16.
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//     int numero;
//     printf("Digite um número de 1 a 5: ");
//     scanf("%d", &numero);
//     switch (numero) {
//         case 5:
//             printf("Muito bom");
//             break;
//         case 4:
//             printf("Bom");
//             break;
//         case 3:
//             printf("Regular");
//             break;
//         case 2:
//             printf("Insuficiente");
//             break;
//         case 1:
//             printf("Muito insuficiente");
//             break;
//         default:
//             printf("Número inválido");
//             break;
//     }
//     return 0;
// }
// 17.
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//    int numero;
//     printf("Digite um número entre 1 e 7: ");
//     scanf("%d", &numero);
//     switch (numero) {
//         case 1:
//             printf("Domingo");
//             break;
//         case 2:
//             printf("Segunda-feira");
//             break;
//         case 3:
//             printf("Terça-feira");
//             break;
//         case 4:
//             printf("Quarta-feira");
//             break;
//         case 5:
//             printf("Quinta-feira");
//             break;
//         case 6:
//             printf("Sexta-feira");
//             break;
//         case 7:
//             printf("Sábado");
//             break;
//         default:
//             printf("Número inválido");
//             break;
//     }
//     return 0;
// }
// 18.
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//   int idade;
//     printf("Digite a sua idade: ");
//     scanf("%d", &idade);
//     if (idade >= 0 && idade <= 1) {
//         printf("Você é um bebê.");
//     } else if (idade >= 2 && idade <= 12) {
//         printf("Você é uma criança.");
//     } else if (idade >= 13 && idade <= 18) {
//         printf("Você é um adolescente.");
//     } else if (idade > 18) {
//         printf("Você é um adulto.");
//     } else {
//         printf("Idade inválida.");
//     }
//     return 0;
// }
// 19.
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// int main() {
//     char estadocivi[20];
//     printf("Digite o seu estado civil: ");
//     scanf("%s", estadocivi);
//     for (int i = 0; i < strlen(estadocivi); i++) {
//         estadocivi[i] = tolower(estadocivi[i]);
//     }
//     if (estadocivi[0] == 's') {
//         if (strcmp(estadocivi, "solteiro") == 0) {
//             printf("Você é solteiro.");
//         } else {
//             printf("Estado civil inválido.");
//         }
//     } else if (estadocivi[0] == 'c') {
//         if (strcmp(estadocivi, "casado") == 0) {
//             printf("Você é casado.");
//         } else {
//             printf("Estado civil inválido.");
//         }
//     } else if (estadocivi[0] == 'd') {
//         if (strcmp(estadocivi, "divorciado") == 0) {
//             printf("Você é divorciado.");
//         } else {
//             printf("Estado civil inválido.");
//         }
//     } else if (estadocivi[0] == 'v') {
//         if (strcmp(estadocivi, "viúvo") == 0) {
//             printf("Você é viúvo.");
//         } else {
//             printf("Estado civil inválido.");
//         }
//     } else {
//         printf("Estado civil inválido.");
//     }
//     return 0;
// }
// 20.
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//   int escolha;
//   int num1 , num2 ;
//   double resultado;
//   printf("Informe o 1º número : ");
//   scanf("%d",&num1);
//   printf("Informe o 2  número : ");
//   scanf("%d",&num2);
//   printf("Agora escolha qual operação você deseja  1- soma,2- subtração,3- multiplicação,4- divisão");
//   scanf("%d",&escolha);
//   switch(escolha){
//     case 1:
//     resultado =(num1 +num2 );
//       printf("A soma é %.2f",resultado);
//       break;
//     case 2:
//     resultado =(num1 - num2);
//       printf("A subtração é %.2f",resultado);
//       break;
//     case 3:
//     resultado =(num1 * num2);
//       printf("A multiplicação é %.2f",resultado);
//       break;
//     case 4:
//     resultado =(num1/num2);
//       printf("A divisão é %.2f ",resultado);
//       break;
//     default:
//     printf("informe um valor de 1 até 4 ");
//       break;
//   }
//   return 0;
// }