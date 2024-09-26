#include<stdio.h>

int a[10], n, i;

void s(int *x, int *y) { int t = *x; *x = *y; *y = t; }

void Heap(int n) {
    for (int ch = 1, ps; ch <= n; ch++) {
        for (int t = a[ch]; ch > 1 && t > a[ps = ch / 2]; ch = ps) a[ch] = a[ps];
        a[ch] = t;
    }
}

void Heapsort(int n) {
    while (n > 1) s(&a[1], &a[n--]), Heap(n);
}

int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++) scanf("%d", &a[i]);
    Heap(n); Heapsort(n);
    for (i = 1; i <= n; i++) printf("%d ", a[i]);
}
