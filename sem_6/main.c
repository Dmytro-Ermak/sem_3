#include "sort.h"
#include "bin.h"

int main() {
    int a[] = {3,4,1,3,43,23,4325,2,6,566,33,323,6753,8,99,33,322,4,5,53,6,7,22,23643,563,32344,5553,64,0};
    int b[] = {3,4,1,3,43,23,4325,2,6,566,33,323,6753,8,99,33,322,4,5,53,6,7,22,23643,563,32344,5553,64,0};
    int len_a = sizeof(a) / sizeof (a[0]);
    int len_b = sizeof(b) / sizeof (b[0]);
    quick_sort(a);
    merge_sort(b, 1, len_b);
    int i = bin_search(a, 3, 0, len_a);
    int k = bin_search(a, 323, 0, len_a);
    int j = 0;
    while (a[j]) {printf("%i ", a[j++]);} putchar('\n');
    printf("%i\n%i\n", i, k);
    j = 0;
    while (b[j]) {printf("%i ", b[j++]);} putchar('\n');
    return 0;
}