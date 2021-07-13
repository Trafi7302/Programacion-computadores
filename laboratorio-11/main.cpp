#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PROTOTIPOS

void menuAgenda();
void mostrarAgenda();
void crearArchivo();
void crearRegistro();
void eliminarRegistro();
void eliminarAgenda();
void revisarAgenda();
void mensajeSalir();

int opcion;
char nombreArchivo[30];
FILE* archivo;
FILE* archivo_temp;
char nombre[15];
char contactoEliminar[15];
char apellido[20];
char telefono[20];

int main(){

  menuAgenda();

  while((opcion > 0) && (opcion < 6)){
    switch(opcion){
      case 1: mostrarAgenda();
          break;
      case 2: crearArchivo();
          break;
      case 3: crearRegistro();
          break;
      case 4: eliminarRegistro();
          break;
      case 5: eliminarAgenda();
          break;
      case 6: revisarAgenda();
          break; 
      case 7: mensajeSalir();
          break; 
    }
    break;
  }
  

  return 0;
}

// IMPLEMENTACIONES

void menuAgenda(){
  printf("----------------------------\n");
  printf("----- AGENDA CONTACTOS -----\n");
  printf("----------------------------\n");
  printf("1.- Listar agendas\n");
  printf("2.- Crear agenda\n");
  printf("3.- Añadir registro en una agenda\n");
  printf("4.- Eliminar un registro de una agenda\n");
  printf("5.- Eliminar una agenda\n");
  printf("6.- Revisar una agenda\n");
  printf("7.- Salir\n");
  scanf("%d", &opcion);
}

void mostrarAgenda(){
  printf("Listar\n");
  // system("dir"); ---> Especial WINDOWS
  system("ls *.txt");
}

void crearArchivo(){
  printf("Ingrese el nombre del archivo que quiere crear:\n");
  scanf("%s", nombreArchivo);
  strcat(nombreArchivo, ".txt");
  archivo = fopen(nombreArchivo, "w");
  fclose(archivo);
}

void crearRegistro(){
  printf("Los archivos disponibles son:\n");
  system("ls *.txt");
  printf("Ingrese el nombre del archivo donde quiere agregar un registro:\n");
  scanf("%s", nombreArchivo);
  strcat(nombreArchivo, ".txt");
  archivo = fopen(nombreArchivo, "w");
  printf("Ingrese el nombre del contacto:\n");
  scanf("%s", nombre);
  printf("Ingrese el apellido del contacto:\n");
  scanf("%s", apellido);
  printf("Ingrese el telefono del contacto:\n");
  scanf("%s", telefono);
  fprintf(archivo, "%s %s %s", nombre, apellido, telefono);
  fclose(archivo);
}

void eliminarRegistro(){
  printf("Los archivos disponibles son:\n");
  system("ls *.txt");
  printf("Ingrese el nombre del archivo donde quiere eliminar un registro:\n");
  scanf("%s", nombreArchivo);
  strcat(nombreArchivo, ".txt");
  archivo = fopen(nombreArchivo, "r");
  while(!feof(archivo)){
    fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
    printf("%s %s %s\n", nombre, apellido, telefono);
  }
  printf("Ingrese el nombre del contacto que quiere eliminar:\n");
  scanf("%s", contactoEliminar);
  rewind(archivo);
  archivo_temp = fopen("tmp.txt", "w");
  while(!feof(archivo)){
    fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
    if(strcmp(contactoEliminar, nombre) == 0){
      // printf("Es\n");
    } else{
      // printf("No es\n");
      fprintf(archivo_temp, "%s %s %s\n");
    }
  }

  fclose(archivo);
  remove(nombreArchivo);
  rename("tmp.txt", nombreArchivo);
}

void eliminarAgenda(){
  printf("Los archivos disponibles son:\n");
  system("ls *.txt");
  printf("Ingrese el nombre del archivo que quiere eliminar:\n");
  scanf("%s", nombreArchivo);
  strcat(nombreArchivo, ".txt");
  remove(nombreArchivo);
}

void revisarAgenda(){
  printf("Los archivos disponibles son:\n");
  system("ls *.txt");
  printf("Ingrese el nombre del archivo que quiere revisar:\n");
  scanf("%s", nombreArchivo);
  strcat(nombreArchivo, ".txt");
  archivo = fopen(nombreArchivo, "r");
  while(!feof(archivo)){
    fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
    printf("%s %s %s\n", nombre, apellido, telefono);
  }
}

void mensajeSalir(){
  printf("Salir\n");
}

