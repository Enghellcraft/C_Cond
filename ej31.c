#include<stdio.h>

int main (void) {

int i, j, a, number[5];
for (i = 0; i < 5; ++i){
printf ("escriba un numero");
scanf ("%d",&number[i]);
}
for (i = 0; i < 5; ++i)
        {for (j = i + 1; j < 5; ++j)
        { if (number[i] > number[j]){
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
                }
            }
        }

printf("The numbers arranged in ascending order are given below \n");

for (i = 0; i < 5; ++i){
printf("%d\n", number[i]);
}

return 0 ;
}
