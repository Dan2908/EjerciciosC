#include <stdio.h>
#include <ctype.h>  // contiene funcion tolower()
#define PAUSA fflush(stdin); getchar()

/* Pide repetitivamente un caracter al usuario hasta que ingresa una vocal */
char pedir_vocal();

/** ---------------------- Programa ----------------------*/

int main(){ 
    printf("\n\t== CADENAS ==\n\n");
    char cadena[50];
    char cadena_reversa[50];    // Para almacenar cadena al revés.
    int i = 0, j = 0;

    // Cargamos cadena
    printf("Ingrese una linea para la cadena: ");
    gets(cadena);

    // Mostramos la cadena
    i=0;
    printf("\nCadena: ");
    while(cadena[i] != '\0'){
        printf("%c", cadena[i]);
        i++;
    }

    // Mostramos cadena al revés (aprovechando valor de i ubicado en el ultimo indice)
    printf("\nCadena al reves: ");
    while(i){       // i != 0
        i--;
        printf("%c", cadena[i]);
    // Almacenamos cadena al revés
        cadena_reversa[j] = cadena[i]; 
        j++;
    }
    cadena_reversa[j] = '\0';       // cerramos cadena con caracter nulo.

    //Buscamos una vocal ingresada por el usuario
    printf("\n\nIngrese una vocal a buscar en la cadena: ");
    char vocal = pedir_vocal();
    short contador = 0;
    i = 0;
    while(cadena[i] != '\0'){
        if(cadena[i] == vocal)
            contador++;
        i++;
    } 
    printf(" => La vocal '%c' aparece %i veces.\n", vocal, contador);

    //Indicar cuantas veces aparece la siguiente secuencia de caracteres: “ca”
    contador = 0;
    i=0;
    while(cadena[i] != '\0'){
        if(cadena[i] == 'c' || cadena[i] == 'C'){
            if(cadena[i+1] == 'a' || cadena[i+1] == 'A'){
                contador++;
            }
        }
        i++;
    }
    printf(" => La secuencia \"ca\" aparece %i veces.\n", contador);

    //Indicar si la cadena es un palíndromo.
    i = 0;
    while(cadena[i] != '\0'){
        if(cadena[i] != cadena_reversa[i]){
            printf(" => La cadena no es un palindromo.\n");
            printf("\nFin del programa, presione Enter para salir...");
            PAUSA;
            return 0;   /*  -- Salida del programa*/
        }
        i++;
    }
    printf(" => La cadena es un palindromo.\n");
    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;
    return 0;
}

/** ---------------------- Definiciones ----------------------*/

char pedir_vocal(){
    char vocal;
    while(1){
        fflush(stdin);      // se resetea buffer de teclado, para que solicite nuevamente
        vocal = tolower( getchar() );   // pide un caracter por teclado, tolower() asegura que sea minúscula
        if(vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u')
            return vocal;   //Si es vocal, retorna el caracter.
        else
            printf("El caracter ingresado '%c' no es una vocal!\n", vocal);
    }
}