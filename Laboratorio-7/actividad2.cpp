#include <stdio.h>

int numero1;
int numero2;
int resultado;

int main(){
  //Pedir dos números de la forma X, Y
  printf("Ingrese dos números de la forma X, Y:\n");
  scanf("%d, %d", &numero1, &numero2);
  //Multiplicar sin el operador *
  for(int i = 0 ; i < numero1 ; i++){
    resultado += numero2;
  }
  printf("%d * %d = %d\n", numero1, numero2, resultado);

  return 0;
}