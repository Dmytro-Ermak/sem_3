#include "swap.h"

int first_no_under(int* array, int value, int start) {
    for (start; array[start] < value; start++);
    return start;
}

int len_cnt(int* array) {
    int i = 0;
    while(array[++i]);
    return i;
}

void quick_sort(int array[]) {
    int len = len_cnt(array);
    printf("%i\n",len);
    //int arrays[5000];
    int* arrays = (int*) calloc(0, sizeof(int) * (4 * len + 1));
    arrays[0] = 1; arrays[1] = len; arrays[2] = 1; arrays[3] = 1;
    if (arrays[0] >= arrays[1])  {
        return;
    }
    int i = 0;
    while (arrays[i]) {     
        int start = (arrays[i++]) - 1;
        int anchor_location = (arrays[i++]) - 1;
        int old_anchor = anchor_location;
        int anchor_prev = anchor_location - 1;
        if (anchor_location - start <= 1) {
            if (array[anchor_location] < array[start]) {
                SWAP(array[anchor_location], array[start]);
            }
            continue;
        }
        int anchor = array[anchor_location];
        for (int j; (j = first_no_under(array, anchor, start)) != anchor_location; anchor_location--, anchor_prev--) {
            SWAP(array[j], array[anchor_prev]);
            SWAP(array[anchor_prev], array[anchor_location]);
        }
        int k = 0;
        while (array[k]) {printf("%i ", array[k++]);} putchar('\n');
        int arrays_len = len_cnt(arrays);
        //arrays = (int*) realloc(arrays, (arrays_len + 5) * sizeof(int)); 
        printf("%i %i %i\n", start, anchor_location, arrays[i - 1]);    
        arrays[arrays_len++] = start + 1;
        if (anchor_location == 0) {
            arrays[arrays_len++] = 1;
        }
        else {
            arrays[arrays_len++] = anchor_location;
        }
        if (anchor_location == old_anchor) {
            arrays[arrays_len++] = old_anchor + 1;
        }
        else {
            arrays[arrays_len++] = anchor_location + 2;
        }
        arrays[arrays_len++] = arrays[i - 1];
        k = 0;
        while (arrays[k]) {printf("%i ", arrays[k++]);} putchar('\n');
        //arrays[arrays_len + 4] = 0;       
    }
    free(arrays);
    return;
}