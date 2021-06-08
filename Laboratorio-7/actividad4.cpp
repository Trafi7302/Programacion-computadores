#include <stdio.h>

int numero;
int valor;
int divisor;

int main(){
  printf("Ingrese el número:\n");
  scanf("%d", &numero);

  printf("Los número primos entre 1 y %d son:\n", numero);

  for(int i = 1 ; i < numero ; i++){
    valor = i;
    
    for(int j = 1 ; j <= valor ; j++){
      if(valor % j == 0){
        divisor += 1;
      } 
    }
    if(divisor == 2){
      printf("%d,", valor);
    }
    divisor = 0; 
  } 
  return 0;
}
