#include <stdio.h>
#include "3_3.h"

int input_cnt(char list[], int counter[]){
    int symb;
    int max = 0;
    int i = 0;
    puts("enter the string:");
    while((symb = getchar()) != '\n'){
        list[i] = symb;
        ++i;
        if (symb >= '0' && symb <= '9'){
            counter[symb - 48] += 1;
            if(counter[symb-48] > max){
                ++max;
            }
        }
    }
    list[i] = '\0';
    return max;
}

void gist(int counter[]){
    for(char i = '0'; i <= '9'; ++i){
        printf("%c: ", i);
        for (int j = 1; j <= counter[i-48]; ++j){
            putchar('#');
        }
        putchar('\n');
    }
}

void gist_vertical(int max, int counter[]){
    for (int i = max; i > 0; --i){
        for (int j = '0'; j <= '9'; ++j){
            if (counter[j - 48] >= i){
                putchar('#'); putchar(' ');
            }
            else{
                putchar(' '); putchar(' ');
            }
        }
        putchar('\n'); 
    }
    for (int j = '0'; j <= '9'; ++j){
        putchar(j); putchar(' ');
    }
}