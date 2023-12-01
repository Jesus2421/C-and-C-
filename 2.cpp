#include <stdio.h>
#include <conio.h>

void Nombre(char primero[20]){
  puts ("nombre :");
  gets (primero);
}
void Apellido(char segundo[20]){
  puts ("apellido :");
  gets (segundo);
}
int main (void){
  int n;
  char primero[20];
  char segundo[20];
  Nombre(primero);
  Apellido(segundo);	
  printf("presione 1 para introducir nombre, precione 2 para introducir apellido");
  printf(", 3 para ver los datos:");
   scanf("%d/n", &n);
   if (n==1) {
   printf("Cambie el Nombre:");
   scanf("%s",primero);
   printf("\nNombre:%s",primero);
   printf("\nApellido:%s",segundo);
    getch();
   }
   else 
   if (n==2) {
      printf("Cambie el apellido:");
      scanf("%s",segundo);
      printf("\nNombre:%s",primero);
      printf("\nApellido:%s",segundo);
      getch();
  }
   else {
  printf("\nNombre:%s",primero);
  printf("\nApellido:%s",segundo);
  getch();
}
}

