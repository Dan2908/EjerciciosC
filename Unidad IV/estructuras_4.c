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
enum promedios{
    MAYOR_O_IGUAL_A_7,
    MENOR_A_7
};    /* Enumerador para contar promedios en un arreglo de tamaño 2*/

//  Muestra los datos de cada alumno en el formato solicitado incluyendo el promedio,
//  imprime promedios y porcentajes mayores o iguales a 7 y menores a 7.
void mostrar_datos(struct Alumno* alumnos);

/*  Se crea arreglo de tipo struct Alumno   */
struct Alumno alumnos[] = { 
    {"40974823", "Ramirez", "Eugenio",  23, 7.45},  // 0
    {"41486222", "Garcia",  "Maria",    22, 8.65},  // 1
    {"35227042", "Lugo",    "Clara",    29, 6.95},  // 2
    {"37586039", "Roberts", "Roberto",  27, 9.45},  // 3
    {"46485937", "Carlson", "Carl",     18, 10  },   // 5
    {"44433772", "Gomez",   "Rogelio",    19, 6.99},   // 6
    {"30555639", "Martinez","Valeria", 38, 4.6 }   // 7
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

void mostrar_datos(struct Alumno* alumnos){
    unsigned short promedios[2] = {0, 0};
    printf("\tListado de alumnos\n"
            "DNI%-10cApellido%-7cNombre%-9cPromedio\n\n", ' ', ' ', ' ');
    for(int i=0; i < cantidad; i++){
        printf("%-13s%-15s%-15s%.2lf\n", alumnos[i].m_dni, alumnos[i].m_apell, alumnos[i].m_nombre, alumnos[i].m_promedio);
        if(alumnos[i].m_promedio >= 7)
            promedios[MAYOR_O_IGUAL_A_7]++;
        else
            promedios[MENOR_A_7]++;
    }
    printf("Total de alumnos: %i\n", cantidad);
    printf("Cantidad de alumnos con promedio mayor e igual a 7: %i\n", promedios[MAYOR_O_IGUAL_A_7]);
    printf("Cantidad de alumnos con promedio menor a 7: %i\n", promedios[MENOR_A_7]);
    printf("Porcentaje de alumnos con promedio mayor e igual a 7: %.2lf %%\n", (double)promedios[MAYOR_O_IGUAL_A_7]*100/cantidad);
    printf("Porcentaje de alumnos con promedio menor a 7: %.2lf %% \n", (double)promedios[MENOR_A_7]*100/cantidad);
    
}
