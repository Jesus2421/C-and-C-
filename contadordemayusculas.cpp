/*3) Programa que lea una cadena y diga cuantas mayúsculas hay.*/

#include <stdio.h>
#include <ctype.h>
#include<conio.h>
 
 int main()
{
   char frase[100];
   int i;
   int contador=0;
   printf("Escriba una frase:");
   scanf("%s",&frase);
   for(i = 0; frase[i]; i++) {
      contador=contador+isupper(frase[i]);
   }
   printf("hay un total de Mayusculas= %d\n",contador);
   getch();
   return 0;
}
         
