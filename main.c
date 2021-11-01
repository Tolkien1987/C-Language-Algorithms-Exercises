#include <stdio.h>
#include <string.h>

int main() {
  
  int age;
  double income, height;
  char gender;
  char name[50]; //Texto é um vetor de char

  age = 20;
  income = 5800.5;
  height = 1.63;
  gender = 'F';
  strcpy(name, "Paty");
  
  printf("Age = %d\n", age);
  
  return 0;
}