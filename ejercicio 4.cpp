#include<stdio.h>
#include<stdlib.h>
int main() {
	float a,b;
	int opt;
	printf("ingrese el primer numero\n");
	scanf("%f",&a);
	printf("ingrese el segundo numero\n");
	scanf("%f",&b);
	
	 if (a > b)
     printf("el primer numero es mayor que el segundo \n");
 else{
 if (a < b)
 printf("el pimer numero es menor que el segundo \n");
 else
 printf("ambos numeros son iguales \n");
 }
}
