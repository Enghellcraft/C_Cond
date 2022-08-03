#include<stdio.h>

int main (void) {

int a, b, c, res;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
printf ("escriba un numero");
scanf ("%d", &c);

if (((a+b)>c)&&((a+c)>b)&&((b+c)>a)) {
    printf ("es posible realizarlo\n");
    if ((a == b)&&(b == c)){
        printf ("es Equilatero\n");
    }else{
    if ((a != b)&&(b != c)){
        printf ("es Escaleno\n");
        }else{
        printf ("es Isosceles\n");}
        }
}else{
printf ("es imposible realizarlo\n");}


return 0;
}
