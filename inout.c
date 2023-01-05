#include "inout.h"
#include "memalloc.h"

int cgettext(char *text) {
    int i;
    int c;

    for (i = 0; (c = getchar()) != EOF; i++)
        *(text + i) = c;
    
    return i;
}