#include <stdio.h>

int numero0;

int main(){
  printf("Ingrese un número para determinar los divisores de este.\n");
  scanf("%d", &numero0);

  printf("Los divisores de %d son:\n", numero0);
  
  for(int i = 1 ; i <= numero0 ; i++){
    if(numero0 % i == 0){
      printf("%d\n", i);
    }
  }
  return 0;
}