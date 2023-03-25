#include <stdio.h>
#include "3_1.h"

void full(char str[]){
    char symb, start, finish;
    int i = 0;
    while ((symb = str[i]) != '\0'){
        if (i == 0){
            putchar (symb);
            ++i;
        }
        else{
            if (symb != '-'){
                putchar(symb);
                ++i;
            }
            else{
                if (str[i-1] >= (start = '0') && str[i-1] <= (finish = '9') && str[i+1] >= '0' && str[i+1] <= '9'){}
                else if (str[i-1] >= (start = 'a') && str[i-1] <= (finish = 'z') && str[i+1] >= 'a' && str[i+1] <= 'z'){}
                else if (str[i-1] >= (start = 'A') && str[i-1] <= (finish = 'Z') && str[i+1] >= 'A' && str[i+1] <= 'Z'){}
                else{
                    putchar(symb);
                    ++i;
                    continue;
                }
                if (str[i-1] < str[i+1]){
                    for(symb = str[i-1] + 1; symb < str[i+1]; ++symb){
                        putchar(symb);
                    }
                }
                else if (str[i-1] > str[i+1]){
                    for(symb = str[i-1] - 1; symb > str[i+1]; --symb){
                        putchar(symb);
                    }
                }
                else{
                    ++i;
                    continue;
                }
                ++i;
            }
        }
    }
}