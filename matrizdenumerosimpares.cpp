/* 1)Crear un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand (time (NULL));
    int matriz[10][10];
    int i,j;
     for (i=0;i<=10;i++){
        for (j=0;j<=10;j++){
             matriz[i][j]=rand()%101;
        }
    }
        printf("\n\t\t Matriz");
        printf("\n");
     for(i=0;i<=10;i++){
          printf("\n\t\t");
      for(j=0;j<=10;j++){
          printf("%3d", matriz[i][j]);
       }
      }
      printf("\n\t\t ");
      printf("\n");
     for (i=0;i<=10;i++){
		 printf("\n\t\t");
        for (j=0;j<=10;j++){
          if(j%2<0){
             printf("%3d", matriz[i][j]);
          }
        }
     }
       getch();
  return 0;
}
