#include <stdio.h>
#include <stdint.h>
#include "4_1_head.h"

int main(void) {
	uint64_t num_10;
	char num_16[] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
	input (num_16);
	num_10 = to_10(num_16);
	printf("%llu", num_10);
	return 0;
}