#include <stdio.h>
#include <time.h>

void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[pos]) pos = j;
        int temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
    }
}

int main() {
    int n, a[20];
    clock_t start = clock();
    printf("Enter size and elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    selection_sort(a, n);
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nTime = %f\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    return 0;
}
