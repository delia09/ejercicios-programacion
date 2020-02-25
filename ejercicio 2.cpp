#include<stdio.h>
int main(void){
 int a,b;
 printf("ingrese el numerador:\n ");
 scanf("%d",&a);
 printf("ingrese el denominador:\n ");
 scanf("%d",&b);
 if (a % b ==0)
 printf(" %d es divisible por %d \n", a, b);
 else
 printf(" %d NO es divisible por %d \n", a, b);
}
