/*2)Programa que lea 10 números por teclado, los almacene en un array y
muestre la suma, resta, multiplicación y división de todos.*/

#include <stdio.h>
#include<conio.h>
#define TAM 10

int main() {
	float vector[TAM],suma=0,resta=0,multi=1,divi=1;
	int i;
	for(i=0;i<TAM;i++)
	{
		printf("Introduce el elemento numero %d: ",i);
		scanf("%f",&vector[i]);
	}

	for(i=0;i<TAM;i++) {
		printf("El elemento %d del vector es: %2f\n",i,vector[i]);
  }
  getch();
   for(i=0;i<TAM;i++){
    suma=suma+vector[i];
  }
  for(i=0;i<TAM;i++){
    resta=vector[i]-resta;
  }
   for(i=1;i<TAM;i++){
    multi=multi*vector[i];
  }
  for(i=1;i<TAM;i++){
    divi=vector[i]/divi;
  }
  printf("la sumatoria del vector es=%2f\n",suma);
  printf("la resta del vector es=%2f\n",resta);
  printf("la Multiplicacion del vector es=%2f\n",multi);
  printf("la division del vector es=%2f\n",divi);
  getch();
	return 0;
}