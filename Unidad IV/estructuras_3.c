#include <stdio.h>
#define PAUSA fflush(stdin); getchar()

/** ---------------------- Declaraciones ----------------------*/

struct Alumno{              /* Estructura Alumnos*/
    char m_dni[11];
    char m_apell[15];
    char m_nombre[15];
    int m_edad;
    double m_promedio;
};  
enum edades;    /* Enumerador para cargar mayor y menor edad en un arreglo de tamaño 2*/
//  Muestra los datos de cada alumno en el formato solicitado incluyendo la edad,
//  promedio de edad y mayor y menor edad.
void mostrar_datos(struct Alumno* alumnos);

/*  Se crea arreglo de tipo struct Alumno   */
struct Alumno alumnos[] = { 
    {"40974823", "Ramirez", "Eugenio",  23, 7.45},  // 0
    {"41486222", "Garcia",  "Maria",    22, 8.65},  // 1
    {"35227042", "Lugo",    "Clara",    29, 6.95},  // 2
    {"37586039", "Roberts", "Roberto",  27, 9.45},  // 3
    {"46485937", "Carlson", "Carl",     18, 10  }   // 4
};
/*  sizeof(alumnos):        Tamaño en bytes del arreglo
    sizeof(struct Alumno):  Tamaño en bytes de la estructura
    El cociente es el tamaño del arreglo        */
static int cantidad = sizeof(alumnos)/sizeof(struct Alumno);

/** ---------------------- Programa ----------------------*/

int main(){
    mostrar_datos(alumnos);
    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;
    return 0;
}

/** ---------------------- Definiciones ----------------------*/


enum edades{
    VACIO = -1,     // -1
    MAYOR_EDAD,     // 0
    MENOR_EDAD      // 1
};
void mostrar_datos(struct Alumno* alumnos){
    int edad = 0;       
    int edades[2] = {VACIO, VACIO};   // Se añade mayor y menor edad
    printf("\tListado de alumnos\n"
            "DNI%-10cApellido%-7cNombre%-9cEdad\n\n", ' ', ' ', ' ');
    for(int i=0; i < cantidad; i++){
        printf("%-13s%-15s%-15s%i\n", alumnos[i].m_dni, alumnos[i].m_apell, alumnos[i].m_nombre, alumnos[i].m_edad);
        edad += alumnos[i].m_edad;
        if(edades[MAYOR_EDAD] == VACIO || edades[MAYOR_EDAD] < alumnos[i].m_edad)
            edades[MAYOR_EDAD] = alumnos[i].m_edad;
        if(edades[MENOR_EDAD] == VACIO || edades[MENOR_EDAD] > alumnos[i].m_edad)
            edades[MENOR_EDAD] = alumnos[i].m_edad;
    }
    printf("Total de alumnos: %i\n", cantidad);
    printf("Promedio de edad de los alumnos: %i\n", (int)edad/cantidad);
    printf("Mayor edad: %i\n", edades[MAYOR_EDAD]);
    printf("Menor edad: %i\n", edades[MENOR_EDAD]);
}