#include <stdio.h>

int numero0;

int main(){
    printf("Ingresar número:\n");
    scanf("%d", &numero0);

    if(numero0 % 2 == 0){
        printf("El número ingresado es par.\n");
    } else {
        printf("El número ingresado es impar.\n");
    }

    return 0;
}