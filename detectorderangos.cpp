/*1) Dado un n�mero real que entra como dato, nos indique si est� contenido
dentro de los l�mites predeterminados. El l�mite inferior es de 100 y
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
