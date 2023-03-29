#include <stdio.h>
#include <stdint.h>
#include "4_2_head.h"

int main(void){
    uint64_t number = input();
    int count_odd = odd_count(number);
    printf("Number: %llx, Count of odd bits equals 1: %i", number, count_odd);
}