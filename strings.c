int strlength(char *s) {
    int i;

    for (i = 0; *s != '\0'; i++, s++)
        continue;

    return i;
}

int strcompare(char *x, char *y) {
    int result = 0;

    for (; *x == *y; x++, y++)
        if (*x == '\0')
            result = 1;

    return result;
}