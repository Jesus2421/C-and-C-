#include <stdio.h>
#define TAM 10

int main(void)
{
	float num[TAM];
	int i;

	for(i=0;i<TAM;i++)
	{
		printf("Introduce el elemento numero %d: ",i);
		scanf("%f",&num[i]);
	}

	for(i=0;i<TAM;i++) {
		printf("El elemento %d del vector es: %f\n",i,num[i]);
  }
	return 0;
}
