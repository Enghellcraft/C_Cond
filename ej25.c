#include<stdio.h>

int main (void) {

int a, b, c, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
printf ("escriba un numero");
scanf ("%d", &c);

if (((a+b)== c)||((a+c)== b)||((c+b)== a)) {
    printf("uno es la suma de los otros");
    }else{
    printf("ninguno es la suma de los otros");}


return 0;
}
