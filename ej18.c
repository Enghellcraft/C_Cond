#include<stdio.h>

int main (void) {

int a, b, c;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
printf ("escriba un numero");
scanf ("%d", &c);

if ((a>b)&&(b>c)){
    printf("%d %d %d son decreccientes",a, b, c);
    }else{
    if ((c>b)&&(b>a)){
       printf("%d %d %d son creccientes",a, b, c);
        }else{
        printf("%d %d %d son desordenados",a, b, c);
        }
    }



return 0;
}
