#include <stdio.h>
#include "3_3.h"

int main(void){
    int max;
    int counter[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '\0'};
    char str1[len];
    max = input_cnt(str1, counter);
    gist(counter);
    putchar('\n'); putchar('\n');
    gist_vertical(max, counter);
}