#include<stdio.h>
#include<stdlib.h>
int main(){
 int edad;
 float total;
 int PRECIO=75;
 printf("Edad del usuario:\n ");
 scanf("%d",&edad);
 if (edad< 10)
 total=PRECIO * 0.4;
 else{
 if (edad > 59)
 total=PRECIO*0.45;
 else
 total=PRECIO;
 }
 printf("El precio final de la entrada es: %0.2f \n", total);
}
