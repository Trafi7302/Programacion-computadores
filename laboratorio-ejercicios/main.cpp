#include <stdio.h>

int opcion;
int numero1;
int numero2;
int resultado;

int main(){
    printf("--------------------------------\n");
    printf("-----------BIENVENIDO-----------\n");
    printf("---------------A----------------\n");
    printf("---------LA CALCULADORA---------\n");
    printf("--------------------------------\n");
    printf("¿Qué operación desea realizar?:\n");
    printf("1.- SUMAR\n");
    printf("2.- RESTAR\n");
    printf("3.- MULTIPLICAR\n");
    printf("4.- DIVIDIR\n");

    scanf("%d", &opcion);

    switch(opcion){
        case 1: printf("Opción escogida: SUMA\n");
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                resultado = numero1 + numero2;
                printf("El resultado de la suma entre %d y %d es: %d\n", numero1, numero2, resultado);
                break;
        case 2: printf("Opción escogida: RESTA\n");
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                resultado = numero1 - numero2;
                printf("El resultado de la resta entre %d y %d es: %d\n", numero1, numero2, resultado);
                break;
        case 3: printf("Opción escogida: MULTIPLICACIÓN\n");
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                resultado = numero1 * numero2;
                printf("El resultado de la multiplicación entre %d y %d es: %d\n", numero1, numero2, resultado);
                break;
        case 4: printf("Opción escogida: DIVISIÓN\n");
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                resultado = numero1 / numero2;
                printf("El resultado de la división entre %d y %d es: %d\n", numero1, numero2, resultado);
                break; 
        default: printf("OPERACIÓN NO ENCONTRADA.\n");
    }

    return 0;
}