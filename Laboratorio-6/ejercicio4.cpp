#include <stdio.h>

int puntos;
int precio;
int codigo;
int opcion;
int TotalPuntos;
int Ptsacumulados;


int main(){
    printf("Ingrese cuantos puntos tiene acumulados:\n");
    scanf("%d", &puntos);
    printf("Ingresar precio del producto:\n");
    scanf("%d", &precio);
    printf("Ingresar código del producto:\n");
    scanf("%d", &codigo);

    if((puntos*10 >= precio) && (codigo < 300)){
      printf("¿Desea realizar el pago de su compra con los puntos acumulados?\n");
      printf("1.- CONFIRMAR\n");
      printf("2.- CANCELAR\n");
      printf("Ingrese la opción:\n");
      scanf("%d", &opcion);

      TotalPuntos = puntos - (precio/10) ;   

      switch(opcion){
        case 1: printf("Su compra ha sido realizada con éxito.\n"); 
                printf("Sus puntos disponibles son: %d\n", TotalPuntos);
                break;
        case 2: printf("No se ha podido realizar la compra.\n");
                printf("Sus puntos son: %d\n", puntos);
                break;
        default: printf("Opción ingresada no válida.\n");        
      }

    } else if((codigo >= 100) && (codigo < 200)){
        printf("El pago de su compra se realizará en efectivo.\n");
        if(precio < 10000){
          Ptsacumulados = precio/100 ; 
            printf("Por su compra, ha acumulado: %d puntos.\n", Ptsacumulados);
        } else{
          Ptsacumulados = precio/50 ;
            printf("Por su compra, ha acumulado: %d puntos.\n", Ptsacumulados);    
        }    
    } else if((codigo >= 200) && (codigo < 300)){
        printf("El pago de su compra se realizará en efectivo.\n");
        if(precio < 10000){
          Ptsacumulados = precio/50;
            printf("Por su compra, ha acumulado: %d puntos.\n", Ptsacumulados);    
        } else{
          Ptsacumulados = precio/30;
            printf("Por su compra, ha acumulado: %d puntos.\n", Ptsacumulados);
        }
    } else{
      printf("CÓDIGO INGRESADO NO VÁLIDO.\n");
    } 

    return 0;
}
