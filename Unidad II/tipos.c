#include <stdio.h>

int main(){
	
  	printf("Tipos de datos en esta maquina:\n\n");
  	printf("\tchar: %i byte(s)\n", sizeof(char));
  	printf("\tshort int: %i byte(s)\n", sizeof(short));
  	printf("\tint: %i byte(s)\n", sizeof(int));
  	printf("\tlong int: %i byte(s)\n", sizeof(long));
  	printf("\tlong long int: %i byte(s)\n", sizeof(long long));
  	printf("\tfloat: %i byte(s)\n", sizeof(float));
  	printf("\tdouble: %i byte(s)\n", sizeof(double));
  	printf("\tlong double: %i byte(s)\n\n", sizeof(long double));

  	//Version de C
#if __STDC_VERSION__ >=  201710L
  	printf("Version de C: C18");
#elif __STDC_VERSION__ >= 201112L
  	printf("Version de C: C11");
#elif __STDC_VERSION__ >= 199901L
  	printf("Version de C: C99");
#else
  	printf("Version de C: C89/C90");
#endif

	return 0;
}