
#include<stdio.h>
#include<stdlib.h>

 int main(int argc){
   int vector [5],i;
   vector[0]=rand()%101;
   vector[1]=rand()%101;
   vector[2]=rand()%101;
   vector[3]=rand()%101;
   vector[4]=rand()%101;
   for (i=0;i<=5;i++){
   printf("vector[%d] = %d\n",i, vector[i]);
 }
 system("pause");
  return 0;
 }
