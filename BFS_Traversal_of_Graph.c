#include <stdio.h>


int check(int num, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}



int main() {
    int n, i, j,edge ,start;
    int u , v ;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];
    int BSF[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }


    printf("Enter number of edges: ");
    scanf("%d", &edge);

    for (i = 0; i < edge ; i++){
        printf("Enter the edge u : v ");
        scanf("%d%d",&u , &v);
        graph[u][v] = 1 ;
        graph [v][u] = 1 ;

    }


    printf("Enter starting vertex: ");
    scanf("%d", &start);
    int k = 0;
    int m = 0;

    BSF[0] = start;

    while (m <= k) {
        int s = BSF[m];

        for (int i = 0; i < n; i++) {
            if (graph[s][i] == 1) {
                if (check(i, BSF, k + 1) == 0) {
                    k++;
                    BSF[k] = i;
                }
            }
        }

        m++;
    }
    printf("BFS Traversal: ");

    for (int i = 0; i <= k; i++) {
        printf("%d ", BSF[i]);
    }
    return 0;
}
