#include<stdio.h>

int main (void) {

int a;
printf ("escriba un a�o");
scanf ("%d", &a);

if ( (a%4) == 0){
    printf ("es un a�o bisiesto");
    }else{
    printf ("no es bisiesto");}

return 0 ;
}
