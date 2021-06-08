#include <stdio.h>

int numero;
int resultado;

int main(){
  do{
    printf("Ingrese un número:\n");
    scanf("%d", &numero);
    resultado += numero;
  } while ( numero >= 0);

  printf("La sumatoria total es: %d\n", resultado);

  return 0;
}