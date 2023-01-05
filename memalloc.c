#include "memalloc.h"

static char allocbuf[MAXSIZE];
static char *allocp = allocbuf;

char *alloc(int n) {
    if (allocbuf + MAXSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else
        return 0;
}

void afree(char *n) {
    if (n >= allocbuf && n < allocbuf + MAXSIZE)
        allocp = n;
}