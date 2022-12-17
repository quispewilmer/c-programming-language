int binsearch(int *x, int *y, int z) {
    int result = -1;
    int start = 0;
    int end = z - 1;
    int mid = (start + end) / 2;

    for (;; mid /= 2) {
        if (*x == y[mid]) {
            result = mid;
            break;
        }

        if (start == end)
            break;

        if (*x > y[mid])
            start = mid + 1;
        else
            end = mid;

        mid = start + end;
    }

    return result;
}