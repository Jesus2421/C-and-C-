#include<stdio.h>
#include<conio.h>
#define MAX 10
int main(int argc, char** args)
{
int matriz[MAX][MAX],C,F,i=0,j=0;
  printf("Cuantas columnas quieres ");
  scanf("%d", &C);
  printf("Cuantos filas quieres ");
  scanf("%d", &F);
     for (i=0;i<=C;i++){
        for (j=0;j<=F;j++){
            printf("ESCRIBE LOS VALORES [%d][%d]==>\t",i+1,j+1);
            scanf("%d", &C);  
        }
    }
        printf("\n\t\t Matriz");
        printf("\n");
     for(i=0;i<=C;i++){
          printf("\n\t\t");
      for(j=0;j<=F;j++){
          printf("%3d", matriz[i][j]);
       }
      }
     getch();
}

