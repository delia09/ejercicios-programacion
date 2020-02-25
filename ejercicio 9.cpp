#include <stdio.h>
#include <stdlib.h>
int main(){
char a;
printf("Presiona una tecla\n");
scanf("%c",&a);
if((a>=48)&&(a<=57))
printf("INGRESASTE UN NUMERO \n");
else 
printf("INGRESASTE UNA LETRA \n");
}
