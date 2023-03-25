#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "4_1_head.h"

void input(char num_16[]) {
    bool lever;
    int i;
    do {
        i = 0;
        lever = true;
        while ((num_16[i] = getchar()) != '\n') {
            if (!((num_16[i]  >= '0' && num_16[i] <= '9') || (num_16[i]  >= 'a' && num_16[i] <= 'f') || (num_16[i]  >= 'A' && num_16[i] <= 'F'))) {
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
	}while (!lever);
	num_16[i] = '\0';
}

uint64_t to_10(char num_16[]) {
	uint64_t number = 0;
	short int i = 0;
	while(num_16[i] != '\0') {
		if (num_16[i]  >= '0' && num_16[i] <= '9') {
			number = number * 16 + num_16[i] - '0';
		}
		else if (num_16[i]  >= 'A' && num_16[i] <= 'F') {
			number = number * 16 + num_16[i] -  + 10;
		}
		else{
			number = number * 16 + num_16[i] - 97 + 10;
		}
		++i;
	}
	return number;
}