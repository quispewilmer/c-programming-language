#include <stdio.h>
#include "math.h"
#include "search.h"
#include "algorithms.h"

int main() {
    int base = 2, exp = 5;
    int binarray[] = {0, 1, 3, 4, 7, 9, 10, 30, 85, 90};
    int shellarray[] = {5, 3, 10, 2, 1, 1, 9, 80, 56};
    int searchinbinarray = 70;

    printf("Hello world!\n");
    printf("Exponential result is: %d\n", power(&base, &exp));
    printf("Binary search result is: %d\n", binsearch(&searchinbinarray, binarray, 10));
    printf("Sorted array with shell sort is: \n");
    shellsort(shellarray, 9);
    for (int i = 0; i < 9; i++) {
        printf("%d ", shellarray[i]);

        if (i == 8) 
            printf("\n");
    }

    return 0;
}