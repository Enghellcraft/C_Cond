#include <stdio.h>
#include <string.h>

int main (void){

char pali[5];
int l = 0, h = strlen(pali) - 1;

printf ("escriba una palabra\n");
scanf ("%c", pali);

while (h > l){
        if((pali[l++]) != (pali[h--])){
                printf("%s no es un palindromo\n", pali);
                }else{
                printf("%s es un palindromo\n", pali);
                }
              }
return 0;

}
