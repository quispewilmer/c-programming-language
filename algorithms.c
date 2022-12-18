void shellsort(int *arr, int n) {
    for (int i = n / 2; i > 0; i /= 2) {
        for (int j = 0; j + i <= n - 1; j++) {
            for (int k = j; k >= 0; k--) {
                if (arr[k + i] < arr[k]) {
                    arr[k + i] += arr[k];
                    arr[k] = arr[k + i] - arr[k];
                    arr[k + i] -= arr[k];
                }
            }
        }
    }
}