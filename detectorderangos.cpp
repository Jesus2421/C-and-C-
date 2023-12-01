/*1) Dado un número real que entra como dato, nos indique si está contenido
dentro de los límites predeterminados. El límite inferior es de 100 y
el superior de 200.*/

#include<stdio.h>
#include<conio.h>

 int main ()
{
 float n;
 printf("teclee un numero real:");
 scanf("%f",&n);
 if (n<100){
  puts ("el N es menor a 100, no esta en el rango");
  getch();
  }
 else if (n>200){
  puts ("el N es mayor a 200, no esta en el rango");
  getch();
  }
 else if(n>=100 && n<=200){
 puts ("el N esta en el rango");
 getch();
 }
}
