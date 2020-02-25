#include <stdio.h>
#include <stdlib.h>
int main(){
	float x1, y1, y2, x2, m, denominador;
	printf("INGRESE LA COORDENADA 1\n");
	printf("valor en el eje x: \n");
	scanf("%d",&x1);
	printf("valor en el eje y: \n");
	scanf("%d",&y1);
	printf("\nINGRESE LA COORDENADA 2");
	printf("valor en el eje x: \n");
	scanf("%d",&x2);
	printf("valor en el eje y: \n");
	scanf("%d",&y2);
	m = (y2-y1)/(x2-x1);
	printf("la pendiente de la recta es %f: ",m);
	denominador = x2-x1;
	if(denominador==0){          //si el denominador es igual a 0 la pendiente tiende al infinito
		printf("\n\nLa recta es vertical");
	}
}
