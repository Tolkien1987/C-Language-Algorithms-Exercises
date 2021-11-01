#include <stdio.h>
#include <string.h>


int main() {
  
  int a, b , resultado;
  a = 5;
  b = 2;
  resultado = a / b;
  printf("%d\n", resultado);

  return 0;
}







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