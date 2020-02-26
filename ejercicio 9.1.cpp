#include <stdio.h>
#include <stdlib.h>
int main(){
char a;
printf("Presiona una tecla\n");
scanf("%c",&a);
  switch (a) {
  case '0':        
  case '1':          
  case '2':         
  case '3':         
  case '4':
  case '5':
  case '6': 
  case '7': 
  case '8': 
  case '9':       
  printf("  es un numero.\n", a);         
	   break;         
	   default:                           
	   printf("  es una letra. \n", a);    }   
 }
