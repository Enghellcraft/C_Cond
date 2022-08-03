#include<stdio.h>

int main(){

 char car;
 printf ("Introduce un carácter y pulsa Intro:\n ");

scanf ("%c",&car);
if ((car >= 'A') && (car <= 'Z'))
printf("La letra es una mayúscula\n");
 else if ((car>= 'a') && ( car <= 'z'))
printf("La letra es una minúscula\n");
 else
 printf("No es una letra\n");
return 0; }
