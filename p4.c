
#include<stdio.h>
#include<time.h>

int a[10], n, i, j, v;
clock_t s, e;

int main() {
    scanf("%d", &n);
    s = clock();
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 1; i < n; i++) {
        v = a[i];
        for (j = i - 1; j >= 0 && a[j] > v; j--) a[j + 1] = a[j];
        a[j + 1] = v;
    }
    e = clock();
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nTime = %f\n", (double)(e - s) / CLOCKS_PER_SEC);
    return 0;
}
