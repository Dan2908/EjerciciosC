/*Diseñarun programa que permita generar un archivo de texto que permita cargar cinco nombres
 *separados por punto. Mostrar el contenido del archivo un nombre abajo del otro.
 */
#include <stdio.h>
#include <ctype.h>
#define PAUSA fflush(stdin); getch()
#define ABRIR_EL "r+"   // Abrir lectura/escritura
#define CREAR_EL "w+"   // Crear lectura/escritura
enum Err{
    NO_ERROR,
    ERR_ABRIR
};

enum Err Error(const enum Err code){
    if (code == ERR_ABRIR)
    {
        fprintf(stderr, "Error al abrir archivo.\n");
    }
    return code;
}

int main(){
    const char nombre[] = "nombres.txt";
    char opc;
    // Leer un archivo
    FILE * arch = fopen(nombre, ABRIR_EL);
    if(arch == NULL){
        opc = tolower(getchar());
        printf("El archivo \"%s\" no existe, Desea crearlo? [s/n]\n", nombre);
        while(opc != 's' &&
         opc != 'n'){
            fflush(stdin);
            opc = tolower(getchar());
        }
        if(opc == 's')
            arch = fopen(nombre, CREAR_EL);
    }
    if(arch == NULL){
        return Error(ERR_ABRIR);
    }
    
    fclose(arch);
    return 0;
}
