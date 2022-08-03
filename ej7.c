#include<stdio.h>

int main (void) {

int a, b, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
if (b != 0) {
    res = a / b;
    printf ("su cociente es %d .", res);
} else { printf ("no se puede dividir por cero");}
return 0 ;

}
