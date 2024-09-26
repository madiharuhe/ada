#include <stdio.h>
#include <time.h>
#define MAX 20

int a[MAX], n;

int linear_search(int key) {
    for (int i = 0; i < n; i++)
        if (a[i] == key) return i;
    return -1;
}

int binary_search(int low, int high, int key) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    return (a[mid] == key) ? mid : (key < a[mid] ? binary_search(low, mid - 1, key) : binary_search(mid + 1, high, key));
}

int main() {
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    // Linear Search
    int key;
    printf("\nLINEAR SEARCH\nEnter key: ");
    scanf("%d", &key);
    clock_t start = clock();
    int result = linear_search(key);
    printf(result == -1 ? "Not found\n" : "Found at index %d\n", result);
    printf("Time = %f seconds\n", (double)(clock() - start) / CLOCKS_PER_SEC);

    // Binary Search
    printf("\nBINARY SEARCH\nEnter key: ");
    scanf("%d", &key);
    start = clock();
    result = binary_search(0, n - 1, key);
    printf(result == -1 ? "Not found\n" : "Found at index %d\n", result);
    printf("Time = %f seconds\n", (double)(clock() - start) / CLOCKS_PER_SEC);

    return 0;
}
