#include<stdio.h>

int main (void) {

int a, b, c, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
printf ("escriba un numero");
scanf ("%d", &c);

if ( (a > b && a < c)||(a > c && a < b )){
    printf("el valor medio es a");
    } else {
    if ((b > a && b < c)||(b < a && b > c)) {
        printf ("el valor medio es b");
        }else {printf ("el valor medio es c");}
}
return 0;
}
