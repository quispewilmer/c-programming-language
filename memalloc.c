#include "memalloc.h"

static char allocbuf[MAXLINES];
static char *allocp = allocbuf;

char *alloc(int n) {
    if (allocbuf + MAXLINES - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else
        return 0;
}

void afree(char *n) {
    if (n >= allocbuf && n < allocbuf + MAXLINES)
        allocp = n;
}