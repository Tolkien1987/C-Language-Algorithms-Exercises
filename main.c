#include <stdio.h>
#include <string.h>

void cleanr_entry() {
  char c;
  while ((c = getchar()) != '\n' && c != EOF) {} 
}

int main() {
  
  int age;
  double income, height;
  char gender;
  char name[50]; 

  printf("Please, type your age: ");
  scanf("%d", &age);
  printf("Please, type your income: ");
  scanf("%lf", &income);
  printf("Please, type your height: ");
  scanf("%lf", &height);
  printf("Please, type your name: ");
  fgets(name, 50, stdin); // entrada padrao no console

  printf("AGE = %d\n", age);
  printf("INCOME = %.21f\n", income);
  printf("HEIGHT = %.21f\n", height);
  printf("NAME = %s\n", name);

  return 0;
}


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