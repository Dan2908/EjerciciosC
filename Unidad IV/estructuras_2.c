#include <stdio.h>
#define PAUSA fflush(stdin); getchar()

/** ---------------------- Declaraciones ----------------------*/

struct Alumno{              /*Estructura Alumnos*/
    char m_dni[11];
    char m_apell[15];
    char m_nombre[15];
    int m_edad;
    double m_promedio;
};

/*  Se crea arreglo de tipo struct Alumno   */
struct Alumno alumnos[] = { 
    {"40974823", "Ramirez", "Eugenio",  23, 7.45},
    {"41486222", "Garcia",  "Maria",    22, 8.65},
    {"35227042", "Lugo",    "Clara",    29, 6.95},
    {"37586039", "Roberts", "Roberto",  27, 9.45},
    {"46485937", "Carlson", "Carl",     18, 10  } 
};

/*  sizeof(alumnos):        Tamaño en bytes del arreglo
    sizeof(struct Alumno):  Tamaño en bytes de la estructura
    El cociente es el tamaño del arreglo        */
static int cantidad = sizeof(alumnos)/sizeof(struct Alumno);

/*  Muestra los datos de cada alumno en el formato solicitado. */
void mostrar_datos(struct Alumno* alumnos);
/*  Muestra los datos de cada alumno en el formato solicitado incluyendo la edad. */
void mostrar_datos_y_edad(struct Alumno* alumnos);

/** ---------------------- Programa ----------------------*/

int main(){
    mostrar_datos_y_edad(alumnos);
    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;
    return 0;
}

/** ---------------------- Definiciones ----------------------*/

void mostrar_datos(struct Alumno* alumnos){
    printf("\tListado de alumnos\n"
            "DNI%-10cApellido%-7cNombre\n\n", ' ', ' ');
    for(int i=0; i < cantidad; i++){
        printf("%-13s%-15s%s\n", alumnos[i].m_dni, alumnos[i].m_apell, alumnos[i].m_nombre);
    }
    printf("Total de alumnos: %i\n", cantidad);
}

void mostrar_datos_y_edad(struct Alumno* alumnos){
    int edad = 0;       // Se añade acumulador
    printf("\tListado de alumnos\n"
            "DNI%-10cApellido%-7cNombre%-9cEdad\n\n", ' ', ' ', ' ');
    for(int i=0; i < cantidad; i++){
        printf("%-13s%-15s%-15s%i\n", alumnos[i].m_dni, alumnos[i].m_apell, alumnos[i].m_nombre, alumnos[i].m_edad);
        edad += alumnos[i].m_edad;  // Se incrementa acumulador
    }
    printf("Total de alumnos: %i\n", cantidad);
    printf("Promedio de edad de los alumnos: %i\n", (int)edad/cantidad);
}