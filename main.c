#include <stdio.h>
#include "math.h"
#include "search.h"

int main() {
    int base = 2, exp = 5;
    int binarray[] = {0, 1, 3, 4, 7, 9, 10, 30, 85, 90};
    int searchinbinarray = 70;

    printf("Hello world!\n");
    printf("Exponential result is: %d\n", power(&base, &exp));
    printf("Binary search result is: %d\n", binsearch(&searchinbinarray, binarray, 10));

    return 0;
}