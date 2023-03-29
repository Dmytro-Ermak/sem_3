#include <stdio.h>
#include "3_2_head.h"
#define len 1000

int main(void){
    char str1[len], str2[len];
    input(str1);
    input(str2);
    delete(str1, str2);
    printf("%s", str1);
    return 0;
}
