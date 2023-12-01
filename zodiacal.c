/*4)Este programa muestra el signo zodiacal de una persona.
Para ello el usuario debe introducir únicamente el día
y el mes de nacimiento y el programa determinará
inmediatamente el signo zodiacal de la persona.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

int main(){
int dia,mes;
system("cls");
printf("introducir su mes de nacimiento:");
scanf("%d",&mes);
printf("introducir su dia de nacimento:");
scanf("%d",&dia);
switch(mes){
case 1: if (dia<=22) printf("capricornio");
else  printf("acuario");break;
case 2: if (dia<=20) printf("acuario");
else  printf("piscis");break;
case 3: if (dia<=19) printf("piscis");
else printf("aries");break;
case 4:if (dia<=19)  printf("aries");
else  printf("tauros");break;
case 5: if (dia<=20) printf("tauro");
else  printf("geminis");break;
case 6: if (dia<=20) printf("geminis");
else  printf("cancer");break;
case 7: if (dia<=21) printf("cancer");
else  printf("leo");break;
case 8: if (dia<=23) printf("leo");
else  printf("virgo");break;
case 9: if (dia<=22) printf("virgo");
else printf("libra");break;
case 10: if (dia<=23)  printf("libra");
else printf("escorpon");break;
case 11: if (dia<=23) printf("escorpion");
else printf("sagitario");break;
case 12: if (dia<=22) printf("sagitario");
else printf ("capricornio");break;
default: printf("mes incorrecto");
}
system("pause");
}
