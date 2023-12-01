//ejercicio1 Jesus Miguel Campos
#include<stdio.h>
 int main ()
{
 char nombre[40];
 int edad;
 float altura,peso;
 printf("teclee un nombre:");
 getch(&nombre);
 puts("teclee una edad:");
 scanf("%i", &edad);
 puts("teclee una altura:");
 scanf("%i", &altura);
 puts("teclee un peso:");
 scanf("%i", &peso);
 printf("Nombre:%s",nombre);
 printf("Edad:%u",edad);
 printf("Altura:%f",altura);
 printf("Peso:%f",peso);
}


