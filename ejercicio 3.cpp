#include <stdlib.h>
#include <stdio.h>
int main(){
    int numero;
    printf( "Introduzca un numero:\n ", 3 );
    scanf( "%d", &numero );
    if ( numero % 2 == 0 )
    printf( "ES PAR\n" );
    else if (numero %3 == 0)
    printf ("es divisible de 3\n");
	else
    printf( "ES IMPAR\n" );
    }
