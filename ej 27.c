#include<stdio.h>

int main(){

 char car;
 printf ("Introduce un car�cter y pulsa Intro:\n ");

scanf ("%c",&car);
if ((car >= 'A') && (car <= 'Z'))
printf("La letra es una may�scula\n");
 else if ((car>= 'a') && ( car <= 'z'))
printf("La letra es una min�scula\n");
 else
 printf("No es una letra\n");
return 0; }
