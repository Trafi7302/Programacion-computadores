#include <stdio.h>

float radio;
float perimetro;
float area;
float pi = 3.14;

int main(){
    printf("Ingrese el radio de la circunferencia\n");
    scanf("%f", &radio);
    perimetro = 2 * pi * radio;
    printf("El perimetro de la circunferencia es %f\n", perimetro);
    area = pi * radio * radio;
    printf("El area de la circunferencia es %f\n", area);

    return 0;
}