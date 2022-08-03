#include<stdio.h>

int main (void) {

int a, b, c, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
printf ("escriba un numero");
scanf ("%d", &c);

if ((a%b == 0)&&(c%b == 0)){
    printf ("b divide a ambos exactamente");
}else {
if ((b%a == 0)&&(c%a == 0)){
    printf ("a divide a ambos exactamente");}
    else {
        if ((a%c == 0)&&(b%c == 0)){
    printf ("c divide a ambos exactamente");}
    else {
        printf ("ninguno divide exactamente");
    }
}
}
return 0 ;
}
