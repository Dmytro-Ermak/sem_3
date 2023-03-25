#include <stdio.h>
#include "3_2.h"

int main(void){
    char str1[len], str2[len];
    input(str1);
    input(str2);
    delete(str1, str2);
    printf("%s", str1);
    return 0;
}
