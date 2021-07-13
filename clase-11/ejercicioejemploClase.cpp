#include <stdio.h>

void pedirOpcion(int* opcion);
void pedirNumerosArreglo(int arreglo[], int elementos);
int sumatoriaArreglo(int arreglo[], int elementos);

int main(){

  int opcion;
  int numero1;
  int numero2;
  int resultado;

  pedirOpcion(&opcion);
  printf("La opción es: %d\n", opcion);

  int numeros[4] = {1, 2, 3, 4};
  sumatoriaArreglo(numeros, 4);
  printf("La sumatoria es: %d\n", sumatoriaArreglo(numeros, 4));

  return 0;
}

void pedirOpcion(int* opcion){
  printf("Ingrese la opción:\n");
  scanf("%d", opcion);
}

void pedirNumerosArreglo(int arreglo[], int elementos){
  for(int i = 0 ; i < elementos ; i++){
    printf("Ingrese el valor para el arreglo[%d]\n", i);
  }

}

int sumatoriaArreglo(int arreglo[], int elementos){
  int suma = 0;
  for(int i = 0 ; i < elementos ; i++){
    suma = suma + arreglo[i];
  }

  return suma;
}

