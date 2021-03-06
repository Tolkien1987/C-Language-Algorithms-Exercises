// General C inputs //
// Tipo Placeholder de formatação
// *int = (inteiro 16 bits) %d ou %i
// long int = (inteiro 32 bits) %li
// long long int = (inteiro 64 bits) %lli
// *float = (real precisão simples) %f
// *double = (real precisão dupla) %lf
// *char = (um único caractere) %c
// *char[ ] = (texto) %s 
// */n = quebra de 

//scanf = ler dados de tipos basicos
//fgets = ler texto até quebra de linha

// for = (início; condição; incremento) 

// _ _ _ _ Exercises _ _ _ //

//fopen - (nome-do-arquivo) e (forma-de-abertura-do-arquivo)
//w - abrir o arquivo para escrita ( se o arquivo ja existir, será sobreescrito)
//r - abrir o arquivo para leitura (não é possivel escrever no arquivo)
//wa - abrir o arquivo para adição de conteudo (se ja existir, conteudo sera add)
//fclose(arq) - sempre que finalizar manipulacao de um arquivo, necessario após uso, fecha-lo

// Structs (Estrutura) - typedef

#include <stdio.h>
#include <string.h>

int main () {

  typedef float nota;

  nota prova1 = 7.0;
  nota prova2 = 6.0;

  nota soma = prova1 + prova2;

  printf("A soam das notas é: %.2f", soma);

  return 0;
}

// _ _ _ _ //



// #include <stdio.h>
// #include <string.h>

// struct st_aluno{
//   char matricula[10];
//   char nome[100];
//   char curso[50];
//   int ano_nascimento;
// };

// int main() {

//   struct st_aluno aluno1;

//   printf("Informe a matrícula do aluno: ");
//   fgets(aluno1.matricula, 10, stdin);

//   printf("Informe o nome do aluno: ");
//   fgets(aluno1.nome, 100, stdin);

//   printf("Informe o curso do aluno: ");
//   fgets(aluno1.curso, 50, stdin);

//   printf("Informe o nascimento do aluno: ");
//   scanf("%d", &aluno1.ano_nascimento);

//   printf("=============== Dados do aluno ==============\n");
//   printf("Matrícula: %s\n", aluno1.matricula);
//   printf("Nome: %s\n", aluno1.nome);
//   printf("Curso: %s\n", aluno1.curso);
//   printf("Ano de nascimento: %d\n", aluno1.ano_nascimento);


//   return 0;
// }



// _ _ _ _ _ //


//Escrita em arquivos!//

// #include <stdio.h>

// int main() {

//   FILE *arq;
//   char fruta[10];

//   arq = fopen("frutas.txt", "a"); //write - escrita

//   if(arq){
//     printf("Informe uma fruta ou 0 para sair: \n");
//     fgets(fruta, 10, stdin); //stdin = standard input ou entrada padrão
//     while(fruta[0] != '0'){
//       fputs(fruta, arq);
//       fgets(fruta, 10, stdin);
//     }
//   }else{
//     printf("Não foi possível criar o arquivo!");
//   }
//   fclose(arq);

//   return 0;
// }

// _ _ _ _ _ //



// #include <stdio.h>
// #include <string.h>

// int main() {

//   FILE *arq;
//   int num, resultado, soma = 0;
//   arq = fopen("numbers.txt", "r");

//   if(arq){
//     while(!feof(arq)){
//       fscanf(arq, "%d", &num);
//       soma = soma + num;
//     }
//   }else{
//     printf("Arquivo não encontrado...");
//   }
//   printf("A soma dos números no arquivo é : %d\n", soma);
//   fclose(arq);

//   return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main() {

//   FILE *arq;
//   char c;

//   arq = fopen("arquivo.txt", "r");

//   if(arq){
//     while((c = getc(arq)) != EOF){ //EOF = End Of File
//       printf("%c", c);
//     }
//   }else{
//     printf("Não achei o arquivo!");
//   }

//   return 0;
// }


// _ _ _ _ _ //


//Entrada e saida//
//FILE == arquivo

// #include <stdio.h>
// #include <string.h>

// int main () {

//   FILE *arq;
  //fopen - (nome-do-arquivo) e (forma-de-abertura-do-arquivo)
  //w - abrir o arquivo para escrita ( se o arquivo ja existir, será sobreescrito)
  //r - abrir o arquivo para leitura (não é possivel escrever ni arquivo)
  //wa - abrir o arquivo para adição de conteudo (se ja existir, conteudo sera add)
  //fclose(arq) - sempre que finalizar manipulacao de um arquivo, necessario após uso, fecha-lo
//   arq = fopen("arquivo.txt", "w"); 


//   return 0;
// }



// _ _ _ _ //


//Arrays e Ponteiros

// #include <stdio.h>
// #include <string.h>

// int main () {

//   int values[5]; // Vetor de 5 posições [0] [1] [2] [3] [4]

//   for (int i = 0; i < 5; i++) {
//     printf("Type the %d/5 value ", (i+1));
//     scanf("%d", &values[i]);
//   }

//   printf("The values are: \n");
//   for (int i = 0; i < 5; i++) {
//     printf("%d\n", values[i]);
//   }


//   return 0;
// }

// _ _ _ _ //



// #include <stdio.h>
// #include <string.h>

// int main () {

//   int n;
//   int* p; // ponteiro é um valor que aponta para um endereço de memoria

//   printf("Type a number: ");
//   scanf("%d", &n);

//   p = &n;

//   printf("The number is %d\n", n);

//   printf("Memory address is %d\n", n);

//   printf("Pointer address: %p\n", p);

//   return 0;
// }


// #include <stdio.h>
// #include <string.h>

// void increment(int value){
//   printf("Before increment.\n");
//   printf("The counter value is %d\n", value);

//   printf("After increment.\n");
//   value++;
//   printf("The counter value is %d\n", value);
// }

// int main() {

//   int counter = 10;

//   printf("The counter is %d\n", counter);
//   printf("The counter value is %d\n", counter);

//   increment(counter);

//   printf("After increment is %d\n", counter);
//   printf("The counter value is %d\n", counter);


//   return 0;
// }


// _ _ _ Funções Estrutura _ _ _ //
//1 tipo de retorno
//2 nome
//3 parametro de entrada
//4 implementacao(opcional)
//retorno (opcional) [void por exemplo, executa, mas nao tem retorno]

// #include <stdio.h>
// #include <string.h>

// void msg() {
//   printf("This is a function. being called!\n");
// }

// int sum(int n1, int n2) {
//   int result = n1 + n2;
//   return result;
// }

// int main () {

//   printf("Hello!\n");
//   msg();
//   int retorno = sum( 4, 2);
//   printf("Retorno = %d", retorno);
//  return 0;
// }


// _ _ _ _ _ _ //

// #include <stdio.h>
// #include <string.h>

// int main () {

//   int numbers[5];
//   numbers[0] = 1;
//   numbers[1] = 3;
//   numbers[2] = 5;
//   numbers[3] = 7;
//   numbers[4] = 9;

//   float values[5];
//   for(int i = 0; i < 5; i++) {
//     values[i] = (float)numbers[i] / (float)2;
//   }

//   for (int i = 4; i >= 0; i--) {
//     printf("%.2f\n", values[i]);
//   }



//   return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main () {

//   int n1, n2, result;
//   double result2;

//   printf("Type the number 1: ");
//   scanf("%d", &n1);

//   printf("Type the number 2: ");
//   scanf("%d", &n2);

//   //soma
//   result = n1 + n2;
//   printf("The result of the sum is : %d\n", result);
//   //subtração
//   result = n1 - n2;
//   printf("The result of the subtraction is : %d\n", result);
//   //multiplicação
//   result = n1 * n2;
//   printf("The multiplication is: %d\n", result);
//   //division
//   result2 = n1 / n2;
//   printf("The result of the division is: %lf\n", result2);
//   //average
//   result2 = (n1 + n2) / 2.0;
//   printf("The average is: %lf\n", result2);
//   //quadrado
//   result2 = n1 * n1;
//   printf("The square is: %lf\n", result2);
//   //modulo
//   if(n1 % 2 == 0) {
//     printf("%d is pair\n", n1);
//   }else{
//     printf("%d is an odd\n", n1);
//   }

//   return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main () {

//   int boolean = 0;

//   if (boolean) {
//     printf("True");
//   }else{
//     printf("False");
//   }



//   return 0;
// }

// _ _ _ _ _ _ _ //


// #include <stdio.h>
// #include <string.h>

// int main () {

//   int value = 0;

//   while (1) {
//     printf("Value is: %d\n", value);
//     printf("I am fucked up!");
//     printf("I broke up. Here's the loop of doom...");
//     value = value + 1;
//   }

//   return 0;
// }

// _ _ _ _ _ //


// Faca um programa que receba e some 5 numeros inteiros e some ate que a entrada seja 0, mostrar some no final, usando "Do While".

// #include <stdio.h>
// #include <string.h>

// int main () {

//   int number;
//   int sum = 0;

//   do {
//     sum = sum + number;
//       printf("Type a number: ");
//       scanf("%d", &number);
//   }
//   while(number !=0);

//   printf("The sum is: %d", sum);

//   return 0;
// }

// _ _ _ _ //



// Faca um programa que receba e some 5 numeros inteiros e some ate que a entrada seja 0, mostrar some no final, usando "While".


// #include <stdio.h>
// #include <string.h>

// int main () {

//   int number;
//   int sum = 0;

//   printf("Type a number: ");
//   scanf("%d", &number);

//   while (number != 0) {
//     sum = sum + number;
//     printf("Type a number: ");
//     scanf("%d", &number);
//   }

//   printf("The sum is %d", sum);

//   return 0;
// }

// _ _ _ _ _ _ //


// Faca um programa que receba e some 5 numeros inteiros ate que a entrada seja 0 usando "FOR".


// #include <stdio.h>
// #include <string.h>

// int main () {

//   int number;
//   int sum = 0;

//   for (int i = 0; i < 5; i++) {
//     printf("Type a number: ");
//     scanf("%d", &number);
//     sum = sum + number;
//   }

//   printf("The sum is %d", sum);


//   return 0;
// }

// _ _ _ _ _ //



// #include <stdio.h>
// #include <string.h>

// int main () {

//   int value;
//   printf("Type a value from 1 to 4: ");
//   scanf("%d", &value);

//   switch(value) {
//     case 1:
//       printf("Sunday\n");
//       break;
//     case 2:
//       printf("Monday\n");
//       break;
//     case 3:
//       printf("Tuesday\n");
//       break;
//     case 4:
//       printf("Wednesday\n");
//       break;
//     default:  
//     printf("Invalid\n");
//   }

//   return 0;
// }

// _ _ _ _ _ //


// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// int main () {

//   int age;
//   printf("How old are you?\n");
//   scanf("%d", &age);

//   if(age < 18) {
//     printf("Your under 18\n");
//   } else if (age > 18 && age < 60) {
//     printf("You are an adult. \n");
//   } else {
//     printf("You are a Sir/Maam \n ");
//   }
//   printf("Your age is %d\n", age);
  
//   return 0;
// }


//  011 - Problema soma_linhas
// Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.

// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// void clean_entry() {
//     char c;
//     while ((c = getchar()) != '\n' && c != EOF) {}
// }

// void read_text(char *buffer, int length) {
//     fgets(buffer, length, stdin);
//     strtok(buffer, "\n");    
// }

// int main () {

//   int M, N;

//   printf("How many lines? ");
//   scanf("%d", &M);
//   printf("How many columns? ");
//   scanf("%d", &N);

//   double mat [M][N];
//   double vet [M];

//   for (int i = 0; i < M; i++) {
//     printf("Type the elements of %da. line: \n", i + 1);
//     for (int j = 0; j < N; j++) {
//       scanf("%lf", &mat[i][j]);

//     }
//   }
//   for (int i = 0; i < M; i++) {
//     vet[i] = 0;
//     for (int j = 0; j < N; j++) {
//       vet[i] = vet[i] + mat[i][j];
//     }
//   }
//   printf("Vector is: \n");
//   for (int i = 0; i < 0; i++) {
//     printf("%.1lf\n", vet[i]);
//   }
  
//   return 0;
// }



// _ _ _ _ _ //



// 010 - Problema "alturas"   [HARDER]
// Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, bem como os nomes dessas pessoas caso houver.


// #include <stdio.h>
// #include <string.h>

// void clean_entry() {
//     char c;
//     while ((c = getchar()) != '\n' && c != EOF) {}
// }

// void read_text(char *buffer, int length) {
//     fgets(buffer, length, stdin);
//     strtok(buffer, "\n");    
// }

// int main () {

//   int N, minorN;
//   double sum, average, percentMinor;

//   printf ("how many people will be count?");
//   scanf("%d", &N);

//   char names [N][50]; // Criando vetor de N posicoes, e qty de texto de (50)
//   int ages [N];
//   double height [N];

//   for (int i = 0; i < N; i++) {
//     printf("Data from %da person :\n", i + 1);
//     printf("Name: ");
//     clean_entry();
//     read_text(names[i], 50);
//     printf("Age: ");
//     scanf("%d", &ages[i]);
//     printf("Height: ");
//     scanf("%lf", &height[i]);
//   }

//   sum = 0;
//   for (int i = 0; i < N; i++) {
//     sum = sum + height[i];
//   }
//   average = sum / N;
//   printf("Average height: %.2lf\n", average);

//   minorN = 0;
//   for (int i = 0; i < N; i++) {
//     if (ages[i] < 16) {
//       minorN = minorN + 1;
//     }
//   }
//   percentMinor = minorN * 100.0 / N;
//   printf("Peoples with less than 16 years old: %.1lf %%\n", percentMinor);
  
//   for (int i = 0; i < N; i++) {
//     if (ages[i] < 16) {
//       printf("%s\n", names[i]);
//     }
//   }
//   return 0;
// }




// _ _ _ _ _ //





// 009 - Problema "soma_vetor"
// Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida: - Imprimir todos os elementos do vetor
// - Mostrar na tela a soma e a média dos elementos do vetor

// #include <stdio.h>

// int main () {

//   int N;
//   double sum, average;

//   printf("how manu numbers you will type?");
//   scanf("%d", &N);

//   double vet[N];

//   for (int i = 0; i < N; i++ ) {
//     printf("Type a number: ");
//     scanf("%lf", &vet[i]);
//   }

//   printf("\n Valores: ");
//   for (int i = 0; i < N; i++) {
//     printf("%.1lf ", vet[i]);
//   }
//   printf("\n");

//   sum = 0;
//   for (int i = 0; i < N; i++) {
//     sum = sum + vet[i];
//   }
//   printf("Sum is equal to = %.2lf\n", sum);

//   average = sum / N;
//   printf("Average = %.2lf\n", average);
 
//   return 0;
// }






// // _ _ _ _ _ //





//  008 - Problema "negativos"
//  Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.


// #include <stdio.h>

// int main () {

//   int N;
//   printf("How many number will you type? ");
//   scanf("%d", &N);

//   int vet[N];

//   for (int i = 0; i < N; i++) {
//     printf("Type a number: ");
//     scanf("%d", &vet[i]);
//   }

//   printf("\n Negative numbers: \n");
//   for (int i = 0; i < N; i++) {
//     if (vet[i] < 0) {
//       printf("%d\n", vet[i]);
//     }
//   }
//   return 0;
// }






// _ _ _ _ _ //







// 007 - Problema "soma_impares" (adaptado de URI 1071)
// Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números impares entre eles.


// #include <stdio.h>

// int main () {

//   int x, y, sum, change, i;

//   printf("Please, type the first number: ");
//   scanf("%d %d", &x, &y);
//   printf("Please, type the second number: ");
  
//   if (x > y) {
//     change = x;
//     x = y;
//     y = change;
//   }
//   sum = 0;
//   for (i = x+1; i < y; i++) {
//     if (i % 2 != 0) {
//       sum = sum + i;
//     }
//   }
//   printf("Sum is = %d\n", sum);
//   return 0;
// }




// _ _ _ _ _ //





// 006 - Problema "tabuada"
// Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.


// #include <stdio.h>

// int main () {

//   int N, i, result;

//   printf("Please, type the number: ");
//   scanf("%d", &N);

//   for (i = 1; i <= 10; i++) {
//     result = N * i;
//     printf("%d x %d = %d\n", N, i, result);
//   }

//   return 0;
// }




// _ _ _ _ _ _ //





// 005 - Problema "media_idades"
// Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSIVEL CALCULAR".

// #include <stdio.h>

// int main () {

//   int age, count, sum;
//   double average;

//   printf("Type the ages: \n");
//   scanf("%d", &age);

//   sum = 0;
//   count = 0;
//   while (age >= 0) {
//     sum = sum + age;
//     count = count + 1;
//     scanf("%d", &age);
//   } if (count == 0) {
//     printf("Cannot calculate\n");
//   } else {
//     average = (double)sum / count;
//     printf("Average = %.2lf\n", average);
//   }

//   return 0;
// }




// _ _ _ _ _ _ //





// 004 Problema "crescente" (adaptado de URI 1113)
// Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O programa deve finalizar quando forem digitados dois valores iguais.

// #include <stdio.h>

// int main () {

//   int x, y;

//   printf("type two number: \n");
//   scanf("%d", &x);
//   scanf("%d", &y);

//   while (x != y) {
//     if (x < y) {
//       printf("Increase\n");
//     } else {
//       printf("Decrease\n");
//     }
//     printf("Type other two numbers: \n");
//     scanf("%d", &x);
//     scanf("%d", &y);
//   }

//   return 0;
// }




// _ _ _ _ _ _ //





// 003 - Problema "menor_de_tres"
// Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. 
// Em caso de empate, mostrar apenas uma vez.

// #include <stdio.h>

// int main () {

//     int a, b, c, lower;

//     printf("First value: ");
//     scanf("%d", &a);
//     printf("Second value: ");
//     scanf("%d", &b);
//     printf("Third value: ");
//     scanf("%d", &c);


//     if (a < b && a < c) {
//         lower = a;
//     } else if (b < c) {
//         lower = b;
//     } else {
//         lower = c;
//     }

//     printf("Lower = %d\n", lower);

//     return 0;
// }




// _ _ _ _ _ //





// 002 - Problema "baskara"
// Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais, conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.


// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// int main() {

//   double a, b, c, delta, x1, x2;

//   printf("Coeficiente a: ");
//   scanf("%lf", &a);
//   printf("Coeficiente b: ");
//   scanf("%lf", &b);
//   printf("Coeficiente c: ");
//   scanf("%lf", &c);

//   delta = b * b - 4 * a * c;

//   if (a == 0 || delta < 0) {
//     printf("Esta equação não possui raizes reais");
//   } else {
//     x1 = (-b + sqrt(delta)) / (2 * a); 
//     x2 = (-b - sqrt(delta)) / (2 * a);
//     printf("X1 = %.4lf\n", x1);
//     printf("X2 = %.4lf\n", x2);
//   } 

//   return 0;
// }




// _ _ _ _ _ _ //





// 001 - Problema "notas" - Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO"

// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// int main() {

//   double grade1, grade2, finalGrade;
//   printf("Type the first grade: ");
//   scanf("%lf", &grade1);

//   printf("Type the second grade: ");
//   scanf("%lf", &grade2);

//   finalGrade = (grade1 + grade2) / 2;
//   printf("Final grade = %.1lf\n", finalGrade);
  
//   if (finalGrade < 60.0) {
//     printf("You are reproved!");
//   } else {
//     printf("You're approved, congratulations!");
//   }

//   return 0;
// }




// _ _ _ _ _ __ //





// 03 - Problema "idades"
// Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.

// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// int main() {

//   char name1[50], name2[50];
//   int age1, age2;
//   double mediumAge; 

//   printf("First person data: \n");
//   printf("Name: ");
//   gets(name1);
//   printf("Age: ");
//   scanf("%d", &age1);

//   printf("Second person data: \n");
//   printf("Name: ");
//   fseek(stdin, 0, SEEK_END);
//   gets(name2);
//   printf("Age: ");
//   scanf("%d", &age2);

//   mediumAge = (age1 + age2) / 2.0;
//   printf("The average beetwen %s and %s is: %.1lf ages", name1, name2, mediumAge);

//   return 0;
// }





// _ _ _ _ _ _ _ //





// 02 - Problema "retangulo"
// Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.


// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// int main() {

//   double base, height, area, perimeter, diagonal;

//   printf("Please, type the base value: ");
//   scanf("%lf", &base);
//   printf("Please type the height value: ");
//   scanf("%lf", &height);

//   area = base * height;
//   perimeter = 2 * (base + height);
//   diagonal = sqrt (pow(base , 2.0) + pow (height , 2.0));

//   printf("Area = %.4lf\n", area);
//   printf("Perimeter = %.4lf\n", perimeter);
//   printf("Diagonal = %.4lf\n", diagonal);

//   return 0;
// }




// _ _ _ _ _ _ __ //




// 01 - Problema "terreno"
// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais.

// #include <stdio.h>
// #include <string.h>

// int main() {

//   double width, height, value, area, price;

//   printf("Type the width value :");
//   scanf("%lf", &width);
//   printf("Type the height value :");
//   scanf("%lf", &height);
//   printf("Type the cost value :");
//   scanf("%lf", &value);

//   area = width * height;
//   price = area * value;

//   printf("The total value is = %.2lf\n", area);
//  printf("The price value is = %.2lf\n", price);

//   return 0;
// }






// _ _ _ _Others studies _ _ __ //






// #include <stdio.h>
// #include <string.h>

// int main() {

//   int M, N, i, j;

//   printf("how many lines? ");
//   scanf("%d", &M);
//   printf("How many Columns? ");
//   scanf("%d", &N);

//   int mat [M] [N];

//   for (i = 0; i < M; i++) {
//     for (j = 0; j < N; j++) {
//       printf("Element [%d, %d]: ", i, j);
//       scanf("%d", &mat [i] [j]);
//     }
//   } 

//   printf("\nTyped Mat: \n");
//   for (i = 0; i < M; i++) {
//     for (j = 0; j < N; j++) {
//       printf("%d", mat [i] [j]);
//     }
//     printf("\n");
//   }

//   return 0;
// }





// _ _ _ _ _ _ _ //




// #include <stdio.h>
// #include <string.h>

// int main() {

//   int N, i;

//   printf("How many numbers you will type in? ");
//   scanf("%d", &N);

//   double vet[N];

//   for (i = 0; i < N; i++) {
//     printf("Type you number: ");
//     scanf("%lf", &vet[i]);
//   }

//   printf("\nTyped Numbers: \n");
//   for (i = 0; i < N; i++) {
//     printf("%.11lf\n", vet[i]);
//   }

//   return 0;
// }





// _ _ _ _ _ _ //





// #include <stdio.h>
// #include <string.h>

// void clean_entry() {
//    char c;
//    while ((c = getchar ()) != '\n'&& c != EOF) {}
// }

// int main() {

//   double C, F;
//   char answ;
  
//   do {
//     printf("Type the Celsius temp. : ");
//     scanf("%lf", &C);
//     F = 9.0 * C / 5.0 + 32.0;
//     printf("Equal to Fahrenheit: %.11lf\n", F);
//     printf("Do you want to repeat (y/n) ?");
//     clean_entry();
//     scanf("%c", &answ);
//   } while (answ == 'y');

//   return 0;
// }





// _ _ _ _ _ _ //





// #include <stdio.h>
// #include <string.h>

// void clean_entry() {
//   char c;
//   while ((c = getchar ()) != '\n'&& c != EOF) {}
// }

// int main() {

  
//   int age;
//   double income, height;
//   char gender;
//   char name[50];

//   printf("Type your age: ");
//   scanf("%d", &age);
//   printf("Type your name: ");
//   clean_entry();
//   fgets(name, 50, stdin);

  
//   printf("Age = %d\n", age);
//   printf("Name = %s\n", name);
//  return 0;
// }




// _ _ _ _ _ _ //





// #include <stdio.h>
// #include <string.h>

// int main() {
  
//   int x, soma;

//   soma = 0;
//   printf("Digite o primeiro numero: ");
//   scanf("%d", &x);

//   while (x != 0) {
//     soma = soma + x;
//     printf("Digite o outro numero: ");
//     scanf("%d", &x);
//   }
//   printf("SOMA = %d\n", soma);
  
//   return 0;
// }




//  _ _ _ _ _ _ _ //




// #include <stdio.h>
// #include <string.h>

// int main() {
  
//   int hour;
//   printf("Type de time: ");
//   scanf("%d", &hour);

//   if (hour <12) {
//     printf("Good morning!\n");
//   } else {
//     printf("Good evening\n");
//   }

//   return 0;
// }




// _ _ _ _ _ _ _ //




// #include <stdio.h>
// #include <string.h>
// void clean_entry() {
//     char c;
// while ((c = getchar()) != '\n' && c != EOF) {} }
// void read_text(char *buffer, int length) {
//     fgets(buffer, length, stdin);
//     strtok(buffer, "\n");
// }
// int main()
// {
//     double salario1, salario2;
//     char nome1[50], nome2[50];
//     int idade;
//     char sexo;
// printf("Nome da primeira pessoa: ");
// read_text(nome1, 50);
// printf("Salario da primeira pessoa: ");
// scanf("%lf", &salario1);

// printf("Nome da segunda pessoa: "); 
// clean_entry();
// read_text(nome2, 50);
// printf("Salario da segunda pessoa: "); 
// scanf("%lf", &salario2);

// printf("Digite uma idade: "); 
// scanf("%d", &idade); 
// printf("Digite um sexo (F/M): "); 
// clean_entry();
// scanf("%c", &sexo);

// printf("Nome 1: %s\n", nome1); 
// printf("Salario 1: %.2lf\n", salario1); 
// printf("Nome 2: %s\n", nome2); 
// printf("Salario 2: %.2lf\n", salario2); 
// printf("Idade: %d\n", idade); 
// printf("Sexo: %c\n", sexo);

// return 0; }




// _ _ _ _ _ _ //




// #include <stdio.h>
// #include <string.h>

// void clean_entry() {
//   char c;
//   while ((c = getchar()) != '\n' && c != EOF) {} 
// }

// void read_text(char *buffer, int length) { fgets(buffer, length, stdin); strtok(buffer, "\n");
// }

// int main() {
  
//   int age1, age2;
//   char name1[50], name2[50]; 

//   printf("Please, type your age: ");
//   scanf("%d", &age1);
//   printf("Please, type your name: ");
//   clean_entry(); // Função criada pra limpeza de linha.
//   read_text(name1, 50); // Função para ler texto

//   printf("Please, type your age: ");
//   scanf("%d", &age2);
//   printf("Please, type your name: ");
//   clean_entry();
//   read_text(name2, 50);

//   printf("AGE1 = %d\n", age1);
//   printf("NAME1 = %s\n", name1);
//   printf("AGE2 = %d\n", age2);
//   printf("NAME2 = %s\n", name2);

//   return 0;
// }




// _ _ _ _ _ _ _ _ //





// #include <stdio.h>
// #include <string.h>


// int main() {
  
//   double a;
//   int b;
//   a = 5.9;
//   b = a;
//   printf("%d\n", b);

//   return 0;
// }




// _ _ _ _ _ _ _ //




// Tipo Placeholder de formatação
// int = (inteiro 16 bits) %d ou %i
// long int = (inteiro 32 bits) %li
// long long int = (inteiro 64 bits) %lli
// float = (real precisão simples) %f
// double = (real precisão dupla) %lf
// char = (um único caractere) %c
// char[ ] = (texto) %s 
// /n = quebra de linha




// _ _ _ _ _ _  //




// #include <stdio.h>
// #include <string.h>

// int main() {
  
//   int age = 20;
//   double income = 5800.5, height = 1.63;
//   char gender = 'F';
//   char name[50] = "Paty"; //Texto é um vetor de char
  
//   printf("AGE = %d\n", age);
//   printf("INCOME = %.21f\n", income);
//   printf("HEIGHT = %.21f\n", height);
//   printf("GENDER = %c\n", gender);
//   printf("NAME = %s\n", name);

//   return 0;
// }


// _ _ _ _ //


// #include <stdio.h>
// #include <string.h>

// int main() {


// double x = 2, y = -4 , z = 6;

//   printf("Type the value of x: ");
//   scanf("%lf", &x);
//   printf("Type the value of y: ");
//   scanf("%lf", &y);
//   printf("Type the value of z: ");
//   scanf("%lf", &z);

//   if ( y > x) {
//     x = y;
//     z = x * 2;
//     y = z + x;
//   }else{
//     z = x + y;
//     y = y - z;
//     x = z / 2;
//   }

//   if (y >= 2) {
//       z = (x + 2);
//   }

//   x = y / z - 0.5;
//   z = x + 1;
//   y = y - z;

//   printf("%lf New value of x: \n", x);
//   printf("%lf New value of y: \n", y);
//   printf("%lf New value of z: \n", z);

//   return 0;
// }