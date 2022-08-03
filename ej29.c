#include<stdio.h>

int main (void) {

int a, b, c, d, e, f;
printf ("escriba un numero");
scanf ("%d", &a);
printf ("escriba un numero");
scanf ("%d", &b);
printf ("escriba un numero");
scanf ("%d", &c);
printf ("escriba un numero");
scanf ("%d", &d);
printf ("escriba un numero");
scanf ("%d", &e);
printf ("escriba un numero");
scanf ("%d", &f);

if ((a==d)||(a==e)||(a==f)){
    printf("%d", a);
}
if ((b==d)||(b==e)||(b==f)){
    printf("%d", b);
}
if ((c==d)||(c==e)||(c==f)){
    printf("%d", c);
}
return 0 ;
}
