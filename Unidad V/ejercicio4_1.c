/*Diseñar un programa que permita generar un archivo de texto que permita cargar cinco nombres
 *separados por punto. Mostrar el contenido del archivo un nombre abajo del otro.
 */

// Activar o desactivar mensajes.
#if 0
    #define LOG(...) fprintf(stderr, ">>> "); fprintf(stderr, __VA_ARGS__)
#else   
    #define LOG(...) 
#endif

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define PAUSA fflush(stdin); getchar()

#define ABRIR_LE "r+"   // Abrir lectura/escritura
#define CREAR_LE "w+"   // Crear lectura/escritura

/* ----------------------- Declaraciones ----------------------- */

/** \enum Err 
 *  Identificadores de errores para archivos. */
enum Err{
    NO_ERROR,       /* Correcto, sin errores.*/
    ERR_ABRIR,      /* Error al abrir archivo.*/
    ERR_CERRAR,     /* Error al cerrar archivo.*/
    ERR_ESCRIBIR    /* Error al escribir archivo.*/
};

/** Pide un caracter por stdin hasta que se ingresa 's','n', 'S' o 'N'.
 * @return 1 si es afirmativo ('s' o 'S'); 0 si no ('n' o 'N'). */
int SoN();

/** Abre el archivo indicado por nombre, si no existe, se pide crearlo.
 *  @param nombre: Nombre del archivo.
 *  @return Puntero a archivo, NULL en caso de error.*/
FILE *obtener_archivo(const char *nombre);

/** Pide n nombres, y los agrega al archivo arch, separado por el caracter sep.
 *  @param arch: Puntero al archivo en donde escribir.
 *  @param cantidad: Cantidad de nombres a pedir.
 *  @param sep: Caracter separador de nombres. */
int cargar_nombres(FILE * arch, int n, const char sep);

/* ----------------------- Programa ----------------------- */

int main(){
    const char nombre[] = "nombres.txt";
    FILE * archivo;
// Abrir un archivo
    archivo = obtener_archivo(nombre);
    if(archivo == NULL){
        fprintf(stderr, "Error: no se ha cargado el archivo...\n");
        return ERR_ABRIR;
    }
//Pedir 5 nombres
    printf("\tArchivo actual: \'%s\'\n\n", nombre);
    printf("Ingrese 5 nombres:\n");

    if(cargar_nombres(archivo, 5, '.')){
        printf("> Nombres cargados satisfactoriamente.\n");
    }else{
        fprintf(stderr, "Error elo escribir en el archivo, saliendo...");
        return ERR_ESCRIBIR;
    }
//Cerrar archivo
    if(fclose(archivo)){
        fprintf(stderr, "Error: No se ha podido cerrar el archivo!\n");
        return ERR_CERRAR;
    }else{
        printf("...Cerrando archivo...\n");
    }

    printf("Programa finalizado, presione Enter para salir...");
    PAUSA;
    return 0;
}

// ----------------------- Definiciones -----------------------

int SoN(){
    char opc = tolower(getchar());
    while(opc != 's' && opc != 'n'){
        fflush(stdin);
        opc = tolower(getchar());
    }
    return (opc == 's') ? 1 : 0;
}

FILE * obtener_archivo(const char *nombre){
// Abrir archivo
    FILE * arch = fopen(nombre, ABRIR_LE);
    printf("...Abriendo el archivo \"%s\"...\n", nombre);
// Si no existe, podemos crearlo
    if(arch == NULL){
        printf("El archivo \"%s\" no existe. Desea crearlo? [s/n]\n", nombre);
        if(SoN()){                     // si elige 's', creamos archivo
            printf("Creando archivo \"%s\"...\n", nombre);
            arch = fopen(nombre, CREAR_LE);
        }
    }
// Salida, si hubo error o no se creó, devolverá el valor NULL.
    return arch;
}

int cargar_nombres(FILE * arch, int cantidad, const char sep){
    char name[100];
    for(int i = 0; i < cantidad; i++){
        printf("Nombre %d: ", i+1);
        gets(name);
        fputs(name, arch);
        fputc('.', arch);
        fflush(stdin);
        LOG("%s\n>>> l: %i\n", name, strlen(name)); 
    }
}