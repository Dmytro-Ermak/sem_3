#include <stdio.h>
#include "3_2.h"

void input(char list[]){
    char symb;
    int i = 0;
    for (int j = 0; j < len; ++j){
        list[j] = 0;
    }
    puts("enter the string:");
    while((symb = getchar()) != '\n'){
        list[i] = symb;
        ++i;
    }
}

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

void delete(char list1[], char list2[]){
    int i = 0, j = 0;
    char symb;
    while((symb = list1[i++]) != '\0'){
        if(is_in(symb, list2)){
            list1[j++] = symb;
        }
    }
    list1[j] = '\0';
}