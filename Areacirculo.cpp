//2) Escribir un programa, que: a)Pida por teclado el radio (dato real) de una esfera. 
// Muestre por pantalla:"El área de una esfera de radio <radio> es: <área>".

#include <stdio.h>
#include<conio.h>
#include <stdlib.h> 
#include <math.h>
 
 main() {
  float r,A;
  float pi=3.14;
  system("cls");
  printf("introducir el radio:");
  scanf("%f",&r);
  if (r<=0){
     printf("error debe introducir un valor mayor a cero");
     getch();
  }
  else if (r>=0) {
   A=4*pi*pow(r,2);
   printf("el area es :%.2f",A);
   getch();
}
}
