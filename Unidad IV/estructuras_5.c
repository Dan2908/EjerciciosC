/* Se define una estructura "estructura_amigo" conteniendo los datos de:
 nombre, apellido, telefono y edad;
 Luego se crea y se carga una estructura de este tipo y por último se imprimen algunos datos
 contenidos en ella*/
#include <stdio.h>

    // Se define una estructura "estructura_amigo" con 4 tipos de datos
struct estructura_amigo{
    char nombre[30];
    char apellido[40];
    char telefono[10];
    int edad;
};
    // Se crea una variable de tipo struct estructura_amigo
struct estructura_amigo amigo = {"Juanjo","López","983403367",30};

int main(){
        // Se imprimen los datos de apellido, edad y teléfono contenidos en la estructura
    printf( "%s tiene ", amigo.apellido );
    printf("%i años ", amigo.edad );
    printf( "y su teléfono es el %s.\n" , amigo.telefono );
    return 0;
}