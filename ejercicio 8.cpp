#include <stdlib.h>
#include <stdio.h>
int main(){
 int num1, num2, num3, aux;
 printf("Introduzca el primer numero:\n ");
 scanf("%d",&num1);
 printf("Introduzca el segundo numero:\n ");
 scanf("%d",&num2);
 printf("Introduzca el tercer numero:\n ");
 scanf("%d",&num3);
 if (num2 < num3){
 aux = num1;
 num1 = num2;
 num2 = aux;
 }
 if (num3 < num1){
 aux = num1;
 num1 = num3;
 num3 = aux;
 }
 if (num3< num2){
 aux = num2;
 num2= num3;
 num3= aux;
 }
 printf("NUMEROS ORDENADOS: %d, %d, %d.\n", num1, num2, num3);
}
