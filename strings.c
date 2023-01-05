int strlength(char *s) {
    char *p = s;

    while (*p != '\0')
        p++;

    return p - s;
}

int strcompare(char *x, char *y) {
    for (; *x == *y; x++, y++)
        if (*x == '\0')
            return 0;

    return y - x;
}

void strcopy(char *x, char *y) {
    while (*x++ = *y++)
        ;
}