#include <stdio.h>
//#include "3_2.h"
#define len 1000

void input(char list[]) {
    char symb;
    int i = 0;
    for (int j = 0; j < len; ++j) {
        list[j] = '\0';
    }
    puts("enter the string:");
    while ((symb = getchar()) != '\n') {
        list[i] = symb;
        ++i;
    }
}
/*
short int is_in(char symb, char list[]){
    int i = 0;
    char elem;
    while ((elem = list[i++]) != '\0'){
        if (elem == symb){
            return 0;
            
        }
    }
    return 1;
}
*/
void delete(char list_1[], char list_2[]) {
    int i = 0, j = 0, k = 0;
    char symb;
    while ((symb = list_1[i++]) != '\0') {
        if (symb != list_2[j]) {
            list_1[k++] = symb;
            continue;
        }
        else if (symb == list_2[j]) {
            j++;
        }
        if (list_1[i] != list_2[j]) {
            if (list_2[j] != '\0') {
                for (int l = 0; l < j; ++l) {
                    list_1[k++] = list_2[l];
                }
            }
            j = 0;
        }      
    }
    list_1[k] = '\0';
}