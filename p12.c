#include<stdio.h>

int a, b, u, v, i, j, n, ne = 1, 
visited[10] = {0}, 
min, mincost = 0, cost[10][10];

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (!cost[i][j]) cost[i][j] = 999;  
        }

    visited[1] = 1;  

    printf("\nEdges of Spanning Tree:\n");
    while (ne < n) {
        for (i = 1, min = 999; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (cost[i][j] < min && visited[i]) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }

        if (!visited[b]) {
            printf("%d Edge (%d, %d) = %d\n", ne++, a, b, min);
            mincost += min;
            visited[b] = 1;
        }

        cost[a][b] = cost[b][a] = 999;  
    }

    printf("Minimum cost = %d\n", mincost);
    return 0;
}
