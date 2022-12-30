#include <stdio.h>
#include "math.h"
#include "search.h"
#include "algorithms.h"
#include "strings.h"

int main() {
    int base = 2, exp = 5;
    int binarray[] = {0, 1, 3, 4, 7, 9, 10, 30, 85, 90};
    int shellarray[] = {5, 3, 10, 2, 1, 1, 9, 80, 56};
    int quickarray[] = {51, 30, 10, 2, 90, 13, 1, 20, 8};
    int searchinbinarray = 70;
    char sentence[] = "Hello world";
    char testsentence[] = "Hello world";
    char voidsentence[] = "";
    char arrtest[10];

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
    printf("Sorted array with quick sort is: \n");
    quicksort(quickarray, 0, 8);
    for (int i = 0; i < 9; i++) {
        printf("%d ", quickarray[i]);

        if (i == 8) 
            printf("\n");
    }
    printf("The hex direction of `base` is: %x\n", &arrtest[1]);
    printf("Length of sentence is: %d\n", strlength(sentence));
    printf("The strings are %sthe same\n", strcompare(sentence, testsentence) == 1 ? "" : "not ");
    strcopy(voidsentence, sentence);
    printf("The content of `voidsentence` is: %s\n", voidsentence);

    int a = 3;
    int *b = &a;
    int c[] = {3, 6, 7, 8};
    int *d = c;
    char *e = "Hola mundo";
    char *f = e;

    *d += 2;

    printf("Test value is: %d\n", *d);
    printf("%s", f);

    return 0;
}