#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
#include<stdlib.h> 
#include<iostream> 


double f(float Xi); 
double f1(float Xi); 

int main(void){ 
int SI=1; 
do{ 
system("cls" ); 
float Xi=0,Ea=0,Xz=0; 
int cont=0; 
 
printf(" METODO DE NEWTON-RAPSONn" ); 
printf("instroduce Xi:" ); 
scanf("%f",&Xi); 
printf("\nnI Xi f(Xi) f1(Xi) Ean" ); 

do{ 
Xz=Xi-(f(Xi)/f1(Xi)); 
Ea=((Xz-Xi)/Xz)*100; 
printf("%d %f %.2f %.2f %f n",cont,Xi,f(Xi),f1(Xi),Ea); 
Xi=Xz; 
cont++; 
}while(Ea>=0.005); 
printf("\n" ); 
printf("DESEAS REALIZAR LA OPERACION OTRA VEZ? SI[1] NO[2]n" ); 
scanf("%d",&SI); 

}while(SI<=1); 
system("PAUSE" ); 
return 0; 
} 


double f(float Xi){ 
float z= (exp(-Xi))-Xi; 
return z; 
} 

double f1(float Xi){ 
float n = (-exp(-Xi))-1; 
return n; 
} 
