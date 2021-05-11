#include <stdio.h>

float numerodecimal1;
float numerodecimal2;
float producto;

int main(){
    printf("Ingrese el primer numero\n");
    scanf("%f", &numerodecimal1);
    printf("Ingrese el segundo numero\n");
    scanf("%f", &numerodecimal2);
    producto = numerodecimal1 * numerodecimal2;
    printf("El resultado del producto entre %f y %f es %f\n", numerodecimal1, numerodecimal2, producto);

    return 0;
}