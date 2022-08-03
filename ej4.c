#include<stdio.h>

int main (void) {

int a, b, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
res = a % b ;
if ( res == 0 )
    {
    printf ("es exacto");}
    else { printf ("no es exacto");}
return 0;

}
