#include<stdio.h>

int main (void) {

int a, b, c, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
printf ("escriba un numero");
scanf ("%d", &c);

if (a > b && a > c) {
    printf ("el mayor numero es A");
    } else {
    if ( b > a && b > c){
        printf ("el mayor numero es B");
        } else {
        printf ("el mayor numero es C");}
    }




}
