#include <stdio.h>

char caracter = 0;

int valor = 0;

int main() {
    printf("ingrese un carácter\n");
    scanf("%c", & caracter);
    valor = caracter;
    printf("el carácter ingresado es representado por el valor de %i", valor);

    return 0;
}