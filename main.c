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


// 1 - Problema "terreno"
// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais.

#include <stdio.h>
#include <string.h>

int main() {

  double width, height, value, area, price;

  printf("Type the width value :");
  scanf("%lf", &width);
  printf("Type the height value :");
  scanf("%lf", &height);
  printf("Type the cost value :");
  scanf("%lf", &value);

  area = width * height;
  price = area * value;

  printf("The total value is = %.2lf\n", area);
 printf("The price value is = %.2lf\n", price);



  

  return 0;
}









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