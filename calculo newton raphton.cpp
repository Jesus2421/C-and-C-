//calcular la raiz de y=x^3+x2x^+x-1 por newton raphton y la derivada es y'=3x^2+4x+1
#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
#include<stdlib.h> 
#include<iostream> 
double f(float xi); 
double df(float xi);
int main() {
    int si=1; 
    do{ 
    system("cls" );
    float xi=0,xk=0,error=0;
    int i;
    printf("Metodo de Newton-Raphton\n" );
    printf ("\n ingresar el valor de x:");
    scanf ("%f",&xi);
    do{ 
     xk=xi-(f(xi)/df(xi)); 
     error=((xk-xi)/xk)*100;
     xi=xk;
     i++;
     printf("\n i=%d",i);
     printf("\n el valos x enesima es=%f",xk);
     printf("\n funcion de xi=%.2f",f(xi));
     printf("\n la derivada de funcion de xi=%.2f",df(xi));
     printf("\n el error del calculo es=%f",error); 
     }while(error>=0.0002); 
      printf("\n" ); 
       printf("desea realizar el calculo otra vez? si[1] no[2]" ); 
        scanf("%d",&si); 
        }while(si<=1); 
         system("PAUSE" ); 
         return 0; 
         } 
         double f(float xi){ 
        float y= pow(xi,3)+2*pow(xi,2)+xi-1; 
        return y; 
        } 
        double df(float xi){ 
        float n =3*pow(xi,2)-4*xi+1; 
        return n; 
        } 

