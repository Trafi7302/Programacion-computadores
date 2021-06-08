#include <stdio.h>

int numero0;
int numanterior = 0;
int num = 1;
int numaux;

int main(){
  printf("Ingrese el número de elementos que quiere visualizar en la Sucesión de Fibonacci:\n");
  scanf("%d", &numero0);

  for(int i = 0 ; i < numero0 ; i++){
    printf("%d,", numanterior);
    numaux = numanterior;
    numanterior += num;
    num = numaux;
  }

  return 0;
}