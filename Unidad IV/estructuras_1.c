#include <stdio.h>
#define PAUSA fflush(stdin); getchar()

/** ---------------------- Declaraciones ----------------------*/

/*Estructura Alumnos*/
struct Alumno{
    char m_dni[11];
    char m_apell[15];
    char m_nombre[15];
    int m_edad;
    double m_promedio;
};

/*  Se crea arreglo de tipo struct Alumno   */
struct Alumno alumnos[] = { {"40974823", "Ramirez", "Eugenio", 23, 7.45},
                            {"41486222", "Garcia", "Maria", 22, 8.65},
                            {"35227042", "Lugo", "Clara", 29, 6.95},
                            {"37586039", "Roberts", "Roberto", 27, 9.45},
                            {"46485937", "Carlson", "Carl", 18, 10} };

/*  sizeof(alumnos):        Tamaño en bytes del arreglo
    sizeof(struct Alumno):  Tamaño en bytes de la estructura
    El cociente es el tamaño del arreglo        */
const int cantidad = sizeof(alumnos)/sizeof(struct Alumno);

/*  Muestra los datos de cada alumno en el formato solicitado. */
void mostrar_datos(struct Alumno* alumnos);

/** ---------------------- Programa ----------------------*/

int main(){
    mostrar_datos(alumnos);
    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;
    return 0;
}

/** ---------------------- Definiciones ----------------------*/

void mostrar_datos(struct Alumno* alumnos){
    printf("\tListado de alumnos\n"
            "DNI%-10cApellido%-7cNombre\n\n", ' ', ' ');
    for(int i=0; i < cantidad; i++){
        printf("%-13s%-15s%s\n", alumnos[i].m_dni, alumnos[i].m_nombre, alumnos[i].m_apell);
    }
    printf("Total de alumnos: %i\n", cantidad);
}