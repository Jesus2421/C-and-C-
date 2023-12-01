#include<stdio.h>
#include <stdlib.h>
#include <conio.h>   
#include <math.h>
int main() {
	float x,y,suma=0,suma2=0,suma3=0,suma4=0,suma5,suma6,suma7,a,b,c,deter;
	float x1,x2,x3,y1,y2,y3,z1,z2,z3,re1,re2,re3;
	int i,ecua,n;
	printf("\t 1.- Linial\n");
	printf("\t 2.- Cuadratica\n");
	printf("\t 3.- Exponecial\n");
	printf("elija la ecuacion que desea:");
	scanf("%d",&ecua);
	 printf ("\n el numero de datos:");
        scanf ("%d",&n);
	if (ecua<=1){
        for(i=0;i<n;i++){
            printf ("\n introducir los valores de x:",i);
                scanf ("%f",&x);
		    printf ("\n introducir los valores de y: ",i);
                scanf ("%f",&y);               
            suma=suma+x;
            suma2=suma2+y;
            suma3=suma3+(y*x);
            suma4=suma4+pow(x,2);
        }
        printf("la sumatoria del x es=%.2f\n",suma);
        printf("la sumatoria del y es=%.2f\n",suma2);
        printf("la sumatoria de x*y es=%.2f\n",suma3);
        printf("la sumatoria de x al cuadrado es=%.2f\n",suma4);
        printf("el sistema de ecuaciomes son\n ");
        printf("%.2f = %ia + b%.2f\n",suma2,n,suma);
        printf("%.2f = a%.2f + b%.2f\n",suma3,suma,suma4);
        getch();
        printf ("\n Resolucion del sistema de ecuaciones\n");
        b= (suma*suma2+n*suma3)/(pow(suma,2)-n*suma3);
        a= (suma2-b*suma)/n;
        printf("b=%.2f\n",b);
        printf("a=%.2f\n",a);
        a=a*n;
        printf("su ecuacion linial es: y= %.2fx + %.2f\n",a,b);
        getch();  
    }
   else if (ecua<=2){
        for(i=0;i<n;i++){
            printf ("\n introducir los valores de x:",i);
                scanf ("%f",&x);
		    printf ("\n introducir los valores de y: ",i);
                scanf ("%f",&y);                
            suma=suma+x;
            suma2=suma2+y;
            suma3=suma3+(y*x);
            suma4=suma4+pow(x,2);
            suma5=suma5+(pow(x,2)*y);
            suma6=suma6+pow(x,3);
            suma7=suma7+pow(x,4);
        }
        printf("la sumatoria del x es=%.2f\n",suma);
        printf("la sumatoria del y es=%.2f\n",suma2);
        printf("la sumatoria de x*y es=%.2f\n",suma3);
        printf("la sumatoria de x al cuadrado es=%.2f\n",suma4);
        printf("la sumatoria de x al cuadrado por y es=%.0f\n",suma5);
        printf("la sumatoria de x al cubo es:%.2f\n",suma6);
        printf("la sumatoria de x a la 4 es:=%.2f\n",suma7);
        printf("el sistema de ecuaciomes son\n ");
        printf("%.2f = %ia + %.2fb + %.2fc\n",suma2,n,suma,suma4);
        printf("%.2f = %.2fa + %.2fb + %.2fc\n",suma3,suma,suma4,suma6);
        printf("%.0f = %.2fa + %.2fb + %.2fc\n",suma5,suma4,suma6,suma7);
        getch();
        x1 = n;
        x2 = suma;  
	    x3 = suma4;
        y1 = suma;  
	    y2 = suma4;
	    y3 = suma6;
	    z1 = suma4;
	    z2 = suma6;
	    z3 = suma7;
	    re1 = suma2;
	    re2 = suma3;
	    re3 = suma5;
        deter = ((x1*y2*z3) + (x2*y3*z1) + (x3*y1*z2)) - ((z1*y2*x3) + (z2*y3*x1) + (z3*y1*x2));
	a = (((re1*y2*z3) + (re2*y3*z1) + (re3*y1*z2)) - ((z1*y2*re3) + (z2*y3*re1) + (z3*y1*re2))) / deter;
	b = (((x1*re2*z3) + (x2*re3*z1) + (x3*re1*z2)) - ((z1*re2*x3) + (z2*re3*x1) + (z3*re1*x2))) / deter;
	c = (((x1*y2*re3) + (x2*y3*re1) + (x3*y1*re2)) - ((re1*y2*x3) + (re2*y3*x1) + (re3*y1*x2))) / deter;
	printf ("\n Resolucion por regla de cramer\n");
	printf("a=%.2f\n",a);
	printf("b=%.2f\n",b);
	printf("c=%.2f\n",c);
	printf ("\n\n Y = %.2f X^2 + %.2fX + %.2f ", c, b, a);
        getch(); 
   }
   else if (ecua<=3){
        for(i=0;i<n;i++){
            printf ("\n introducir los valores de x:",i);
                scanf ("%f",&x);
		    printf ("\n introducir los valores de y: ",i);
                scanf ("%f",&y);                
            suma=suma+x;
            suma2=suma2+ log10(y);
            suma3=suma3+(log10(y)*x);
            suma4=suma4+pow(x,2);
        }
        printf("la sumatoria del x es=%.2f\n",suma);
        printf("la sumatoria del logaritmo de y es=%.2f\n",suma2);
        printf("la sumatoria de logaritmo de y * x es=%.2f\n",suma3);
        printf("la sumatoria de x al cuadrado es=%.2f\n",suma4);
        printf("el sistema de ecuaciomes son\n ");
        printf("%.2f = lg a*%i + lg b*%.2f\n",suma2,n,suma);
        printf("%.2f = lg a*%.2f + lg b*%.2f\n",suma3,suma,suma4);
        b= (suma*suma2+n*suma3)/(pow(suma,2)-n*suma3); 
        a= (suma2-b*suma)/n;
        a=pow(10,a);
        b=pow(10,b);
        printf("b=%.2f\n",b);
        printf("a=%.2f\n",a);
        a=a*n;
        printf("su ecuacion exponecial es: y= %.2f + %.2fx\n",a,b);
        getch();  
   }
   else {
        printf("error opcion no valida");
        getch();
   }
}
