int power(int *x, int *y) {
    int result = 1;

    if (*y == 0) {
        return result;
    }

    for (int i = 1; i <= *y; i++)
        result = result * *x;

    return result;
}