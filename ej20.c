#include<stdio.h>

int main (void) {

int a;
printf ("escriba un año");
scanf ("%d", &a);

if ( (a%4) == 0){
    printf ("es un año bisiesto");
    }else{
    printf ("no es bisiesto");}

return 0 ;
}
