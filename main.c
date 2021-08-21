#include <stdlib.h>
#include <stdio.h>

int main(){
  
  float base, altura, area; //com casa decimal

  printf("Digite o valor da base (cm): "); //ESCREVA
  scanf("%f" , &base); //LEIA

  printf("Digite o valor da altura (cm): "); //ESCREVA
  scanf("%f" , &altura);  //LEIA

  area = base * altura;

  printf("A área do retângulo é: %f\n", area); //ESCREVA

}