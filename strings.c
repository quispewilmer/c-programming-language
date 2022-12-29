int strlength(char *s) {
    int i;

    for (i = 0; *s != '\0'; i++, s++)
        ;

    return i;
}

int strcompare(char *x, char *y) {
    int result = 0;

    for (; *x == *y; x++, y++)
        if (*x == '\0')
            result = 1;

    return result;
}

void strcopy(char *x, char *y) {
    for (; (*x = *y) != '\0'; x++, y++)
        ;
}