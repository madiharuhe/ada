#include<stdio.h>

int n, q[20], visited[20], a[20][20], f = 0, r = -1;

void bfs(int v) {
    visited[v] = 1;
    q[++r] = v;
    while (f <= r) {
        v = q[f++];
        for (int i = 1; i <= n; i++)
            if (a[v][i] && !visited[i])
                q[++r] = i, visited[i] = 1;
    }
}

int main() {
    int v;
    printf("Vertices: "), scanf("%d", &n);
    printf("Adjacency matrix:\n");
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    
    printf("Starting vertex: "), scanf("%d", &v);
    bfs(v);
    
    printf("Reachable nodes from %d: ", v);
    for (int i = 1; i <= n; i++)
        if (visited[i])
            printf("%d ", i);
    
    return 0;
}
