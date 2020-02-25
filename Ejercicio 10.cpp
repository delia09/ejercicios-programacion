#include <stdio.h>
 int main(){ 
 int base, altura, base2;   
 float area;   
 int opcion;           
	printf("1 - Calcular el área de un triangulo \n");   
	printf("2 - Calcular el área de un trapecio \n");   
	printf("3 - Calcular el área de un rectangulo \n"); 
    printf("Opcion: ");   
    scanf("%d",&opcion); 
  switch(opcion){     
    case 1:        
	printf("AREA DEL TRIÁNGULO    \n");       
	printf("Base:  ");       
	scanf("%d",&base);       
	printf("Altura:  ");       
	scanf("%d",&altura); 
	area=(float)base*altura/2;       
	printf("El area del triangulo es %0.2f\n",area);  
	break;
    case 2:       
	printf("AREA DEL TRAPECIO    \n");       
	printf("Base mayor: ");       
	scanf("%d",&base);       
	printf("Base menor: ");       
	scanf("%d",&base2);       
	printf("Altura del trapecio: ");       
	scanf("%d",&altura);
	area=((base+base2)/2.0)*altura;       
	printf("El area del trapecioes %0.2f\n",area); 
	break;    
    case 3:       
	printf("AREA DE UN RECTANGULO:    \n");      
	printf("Base: ");       
	scanf("%d",&base);      
	printf("Altura: ");       
	scanf("%d",&altura);            
	area=base*altura; 
	area=base*altura;            
	printf("El area del rectangulo es %0.2f\n",area); 
	break;     
    default:       
	printf("");   
	}  
	} 
