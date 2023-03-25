#include <stdio.h>
#include "3_1.h"

int main(void){
    char str[len];
    char symb;
    int i = 0;
    while ((symb = getchar()) != '\n'){
        str[i++] = symb;
    }
    str[i] = '\0';
    full(str);
    return 0;
}