#include <stdlib.h>
#include <stdio.h>

int get_len(int* arr) {
	int len = 0;
	while (*arr++) {len++;putchar(len);}
	return len;
}

void merge_sort(int* array, int part_len, int len) {
	if (part_len >= len) {return;}
	int* copy = array;
	for (int l = 0; l < len;) {
		int* first = (int*) calloc(0, sizeof(int) * (part_len + 1));
		int* second = (int*) calloc(0, sizeof(int) * (part_len + 1));
		for (int i = 0; i < part_len; i++) {
			first[i] = copy[l + i];
			second[i] = copy[l + i + part_len];
		}
		int j = 0;
		for(int i = 0; i + j < 2 * part_len;) {	
			if (first[i] == 0 && second[j] == 0) {
				break;
			} else if (second[j] == 0) {
				copy[l++] = first[i++];
			} else if (first[i] == 0) {
				copy[l++] = second[j++];
			} else if (first[i] > second[j]) {
				copy[l++] = second[j++];
			} else if (first[i] <= second[j]) {
				copy[l++] = first[i++];
			}
		}
		free(first);
		free(second);
	}
	merge_sort(array, part_len << 1, len);
}
