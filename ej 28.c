#include<stdio.h>

int main (void) {

int kg, pric, c, res;
printf ("escriba los kg");
scanf ("%d", &kg);
printf ("escriba precio por kg");
scanf ("%d", &pric);

if (kg <= 2){
        res = kg * pric;
    printf("sin descuento precio: %d", res);
    }else if ((kg > 2)&& (kg <= 5)){
            res = kg * pric * 0.9;
            printf("10 descuento: %d", res);
            }else if ((kg > 5)&& (kg <= 10)){
            res = kg * pric * 0.85;
            printf("15 descuento: %d", res);
            }else{
            res = kg * pric * 0.80;
            printf("20 descuento: %d", res);}


return 0 ;
}
