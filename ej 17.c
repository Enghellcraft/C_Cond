#include<stdio.h>

int main (void) {

char a, b, c ;
printf ("escriba una letra\n");
scanf ("%c", &a);
printf ("escriba una letra\n");
scanf ("%c", &b);
printf ("escriba una letra\n");
scanf ("%c", &c);

if ((a>b)&&(b>c)){
    printf("%c %c %c",a, b, c);
    }else{
    if ((a>b)&&(c>b)&&(a<c)){
       printf("%c %c %c",a, c, b);
        }else{
        if((b>a)&&(a>c)){
            printf("%c %c %c",b, a, c);
            }else{
            if((b>a)&&(c>a)&&(b>c)){
                printf("%c %c %c",b, c, a);
            }else{
            if((c>a)&&(a>b)){
                       printf("%c %c %c",c, a, b);
                }else{
                printf("%c %c %c",c, b, a);}
                 }
                }
              }
            }

return 0;
}
