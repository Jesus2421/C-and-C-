#include <stdio.h>
#include <stdlib.h>
#include <conio.h>   
#include <math.h>

double Suma (double a, double b)
{
	  double c;
     printf("\n introduzca el primer sumando:");
     scanf ("%lf", &a);
     printf("\n introduzca el segundo sumando:");
     scanf ("%lf", &b);
     c = a + b;
     return (c); 
}
double Resta (double a, double b)
{
	 double c;
    printf("\n introduzca el primer restando:");
    scanf("%lf", &a);
    printf("\n introduzca el segundo restando:");
    scanf("%lf", &b);
    c = (a-b);
    return (c);
}
double Multiplicacion (double a, double b)
{
	 double c;
    printf("\n introduzca el primer multiplicando:");
    scanf("%lf", &a);
    printf("\n introduzca el multiplicador:");
    scanf("%lf", &b);
    c = a * b;
    return (c);
}
double Division (double a, double b)
{
	 double c;
    printf("\n introduzca el primer dividendo:");
    scanf("%lf", &a);
    printf("\n introduzca el segundo dividendo:");
    scanf("%lf", &b);
    c = a / b;
    return (c);
}
double Raiz_cuadrada (double a){
	 double c;
    printf("\n introduzca la cifra a la que efectuar la raiz: ");
    scanf ("%lf", &a);
    c = sqrt (a);
    return (c);
}
double Potencia (double a, double b)
{
	 double c;
    printf("\n introduzca la base:");
    scanf("%lf", &a);
    printf("\n introduzca el exponete:");
    scanf("%lf", &b);
    c =pow(a,b);
    return (c);
}
double Coseno (double a){
	 double c;
    printf("\n introduzca el angulo: ");
    scanf ("%lf", &a);
    c = cos (a*3.14/180);
    return (c);
}
double Seno (double a){
	 double c;
    printf("\n introduzca el angulo: ");
    scanf ("%lf", &a);
    c = sin (a*3.14/180);
    return (c);
}
double Tangente (double a){
	 double c;
    printf("\n introduzca el angulo: ");
    scanf ("%lf", &a);
    c = tan (a*3.14/180);
    return (c);
}
double Exponencial (double a){
	 double c;
    printf("\n introduzca el parametro: ");
    scanf ("%lf", &a);
    c = exp (a);
    return (c);
}
double Neperiano (double a){
	 double c;
    printf("\n introduzca el parametro: ");
    scanf ("%lf", &a);
    c = log (a);
    return (c);
}
double Logaritmo (double a){
	 double c;
    printf("\n introduzca el parametro: ");
    scanf ("%lf", &a);
    c = log10 (a);
    return (c);
}
int main () {
 double a,b,resultado;
 int i, operacion;
    printf("\t\tCalculadora Cientifica\n\n");
    printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Multplicaci¢n\n");
	printf("\t 4.- Division\n");
	printf("\t 5.- Raiz cuadrada\n");
	printf("\t 6.- Potencia\n");
	printf("\t 7.- Coseno\n");
	printf("\t 8.- Seno\n");
	printf("\t 9.- Tangente\n");
	printf("\t 10.- Exponencial\n");
	printf("\t 11.- logaritmo neperiano\n");
	printf("\t 12.- logarimo base 10\n");
	printf("elija la operacion que desea:");
	scanf("%d",&operacion);
	switch (operacion){
	   case 1:resultado = Suma (a,b);
	   break;
       case 2:resultado = Resta (a,b);
	   break;
       case 3:resultado = Multiplicacion (a,b);
	   break;
       case 4:resultado = Division (a,b);
       break;
       case 5:resultado = Raiz_cuadrada (a);
 	   break;
 	   case 6:resultado = Potencia (a,b);
 	   break;
 	   case 7:resultado = Coseno (a);
 	   break;
 	   case 8:resultado = Seno (a);
 	   break;
       case 9:resultado = Tangente (a);
 	   break;
 	   case 10:resultado = Exponencial (a);
 	   break;
 	   case 11:resultado = Neperiano (a);
 	   break;
 	   case 12:resultado = Logaritmo (a);
 	   break;
    }
    printf("\n El resultado es: %.2f", resultado);
  getch();
  return 0;

}

