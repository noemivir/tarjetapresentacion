#include <stdio.h>
//definimos las variables para los valores
char nombreCompleto[] = " Noemi Villada Ramirez ";
char fechaCumple[] = " 17 de mayo de 2000";
int edad = 23;
char telefono[] = " 7296439823 ";
char email[] = " noemivillada80@gmail.com ";
char matricula[] = " 1970570 ";

//para la imprecion de los valores 
void mostrarInformacion() {
    printf("Nombre completo: %s\n", nombreCompleto);
    printf("Fecha de cumpleanos: %s\n", fechaCumple);
    printf("Edad: %d\n", edad);
    printf("Telefono: %s\n", telefono);
    printf("Email: %s\n", email);
    printf("Matricula: %s\n", matricula);
}

//muestra resultados de la informacion
int main() {
    
    mostrarInformacion();
    
    return 0;
    
}

