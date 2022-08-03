#include<stdio.h>

int main (void) {

int a, b, c, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
printf ("escriba un numero");
scanf ("%d", &c);

if ( (b%a == 0)&& (c%a == 0)){
    printf ("es divisor de ambos\n");
}else{
printf("no es divisor de ambos\n");}


return 0;
}
