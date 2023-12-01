int main() {
 int i,su=0;
 float prom;
 system("cls"); 
  for (i=1;i<=10;i++){
        su+=i;
        prom=su/10;      
}
 printf ("\n la suma es = %d",su); 
 printf ("\n el promedio es = %.2f",prom);
 system("pause");
}
