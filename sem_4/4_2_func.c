#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "4_2_head.h"

uint64_t input(void){  
    char symb;
    bool lever;
    do {
        uint64_t number = 0x0;
        int i = 0;
        lever = true;
        while ((symb = getchar()) != '\n') {
            number *= 16;
            if (symb >= '0' && symb <= '9') {
               number += (symb - '0');  
            }
            else if (symb  >= 'a' && symb <= 'f') {
                number += (symb + 10 - 'a');
            }
            else if (symb  >= 'A' && symb <= 'F') {
                number += (symb + 10 - 'A');
            }
            else {
               if (lever) {
                    puts("ERROR: INCORRECT VALUE, Input count again: ");
                }
                lever = false; 
            }
            ++i;
		} 
		if (i > 16) {
            puts("ERROR: INCORRECT VALUE\nInput count again: ");
            lever = false;
        }
        if (lever) {
            return number;
        }
	}while (!lever);
}

int odd_count(uint64_t number) {
    int count = 0;
    while (number){
        if (number % 2){
            ++count;
        }
        number >>= 2;
    }
    return count;
}