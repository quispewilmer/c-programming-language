int strlength(char *s) {
    char *p = s;

    while (*p != '\0')
        p++;

    return p - s;
}

int strcompare(char *x, char *y) {
    int result = 0;

    for (; *x == *y; x++, y++)
        if (*x == '\0')
            result = 1;

    return result;
}

void strcopy(char *x, char *y) {
    while (*x++ = *y++)
        ;
}