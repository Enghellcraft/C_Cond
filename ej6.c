#include<stdio.h>

int main (void) {

int a, b, sum, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
sum = a + b;
res = sum % 2;
if (res == 0) {
    printf ("son pares"); }
    else { printf ("son impares") ;}

}
