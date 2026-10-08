#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int graph[MAX][MAX] = {0};
int visited [MAX];

// struct queue {
//     int size;
//     int front ;
//     int back;
//     int *arr;
// };

// void traverse(struct queue *huzi){
//     int i = huzi-> front + 1;
//     while (i <= huzi-> back){
//         printf("%d ",huzi ->arr[i]);
//         i++;
//     }
//     printf("\n");
// }

// int dequeue(struct queue * huzi){
//     int temp = huzi -> arr[huzi -> front];
//     huzi-> front++;
//     return temp;
// }
// void enqueue(struct queue * huzi , int value){
//     huzi-> back++;
//     huzi -> arr[huzi -> back] = value;

// }


int main()
{
    // struct queue* q;
    // q -> size = 10;
    // q -> arr = (int *) malloc ( q-> size * sizeof(int));
    // q -> front = -1;
    // q -> back = -1;
    int vertices , edges , starting_point , u , v ;
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    for (int i = 0 ; i < edges ; i++){
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 2;
    }
    printf("Enter the starting vertex of the traversal: ");
    scanf("%d",&starting_point);

for ( int i = 0 ; i < vertices ; i++){
    for ( int j = 0 ; j < vertices ; j ++){
        printf("%d ",graph[i][j]);
    }
    printf("\n");
}
    // int k = 0  ;
    // int BSF[vertices];
    // for ( int i = 0 ; i < vertices ; i++){
    //     for ( int j = 0 ; j < vertices ; j++){
    //         int temp = q -> front;
    //         dequeue(q);
    //         BSF[k] = temp ;
    //         k++;
    //         if ( graph[i][j] = 1 ){
    //             enqueue(q,graph[i][j]);
    //         }

    //     }
    // }
    // traverse(q);

}
