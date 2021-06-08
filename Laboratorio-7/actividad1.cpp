#include <stdio.h>

int valormin;
int valormax;

int main(){
  printf("Ingrese el valor mínimo del rango de números.\n");
  scanf("%d", &valormin);
  printf("Ingrese el valor máximo del rango de números\n");
  scanf("%d", &valormax);
  
  printf("Los números pares entre %d y %d son:\n", valormin, valormax);
  
  for(int i = 1 ; i < valormax ; i++ ){
    if(i % 2 == 0){
      printf("%d\n", i);
    }
  }

  return 0;
}