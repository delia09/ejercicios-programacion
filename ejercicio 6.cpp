#include <stdio.h>
#include <stdlib.h>
int main(void){
 float f, x;
 printf ("Introduzca el valor de x:\n");
 scanf("%f",&x);
 if (x <= 0 )
 f = x + 3;
 else
 f = (x * x) + 2 * x;
 printf ( "f(%0.2f) = %0.2f \n", x, f);
}
