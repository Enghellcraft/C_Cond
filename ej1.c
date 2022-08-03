#include<stdio.h>

int main (void) {

int num;

printf ("ingrese un numero");
scanf ("%d", &num);

    if (num > 0) {
            printf ("su numero es positivo");
        } else {
            if (num < 0) {
                printf ("su numero es negativo");
            } else {
                printf ("su numero es cero"); }
    }

return 0;

}
