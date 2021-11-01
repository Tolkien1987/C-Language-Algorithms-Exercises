#include <stdio.h>
#include <string.h>

int main() {
  
  int age = 20;
  double income = 5800.0, height = 1.63;
  char gender = 'F';
  char name[50] = "Paty"; //Texto é um vetor de char
  
  printf("AGE = %d\n", age);
  printf("INCOME = %.21f\n", income);
  printf("HEIGHT = %.21f\n", height);
  printf("GENDER = %c\n", gender);
  printf("NAME = %s\n", name);

  return 0;
}