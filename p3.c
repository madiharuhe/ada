#include <stdio.h>
#include <time.h>

void merge_sort(int a[], int l, int h) {
    if (l < h) {
        int m = (l + h) / 2, i = l, j = m + 1, k = l, b[20];
        merge_sort(a, l, m);
        merge_sort(a, m + 1, h);
        while (i <= m && j <= h) b[k++] = (a[i] < a[j]) ? a[i++] : a[j++];
        while (i <= m) b[k++] = a[i++];
        while (j <= h) b[k++] = a[j++];
        for (i = l; i <= h; i++) a[i] = b[i];
    }
}

int main() {
    int n, a[20];
    clock_t start = clock();
    printf("Enter size and elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    merge_sort(a, 0, n - 1);
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nTime = %f\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    return 0;
}
