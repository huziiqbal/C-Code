#include <stdio.h>
#include<stdlib.h>
struct queue {
    int size;
    int front ;
    int back;
    int *arr;
};
void traverse(struct queue *huzi){
    int i = huzi-> front + 1;
    while (i <= huzi-> back){
        printf("%d ",huzi ->arr[i]);
        i++;
    }
    printf("\n");
}

int dequeue(struct queue * huzi){
    int temp = huzi -> arr[huzi -> front];
    huzi-> front++;
    return temp;
}
void enqueue(struct queue * huzi , int value){
    huzi-> back++;
    huzi -> arr[huzi -> back] = value;

}
int main(){
    // struct queue* q = (struct queue *) malloc ( sizeof(struct queue));
    struct queue* q;
    q -> size = 10;
    q -> arr = (int *) malloc ( q-> size * sizeof(int));
    q -> front = -1;
    q -> back = -1;
    enqueue(q,5);
    enqueue(q,9);
    enqueue(q,8);
    printf("Queue:\n");
    traverse(q);
    printf("Queue after dequeue:\n");
    dequeue(q);
    traverse(q);
    printf("Queue after Enqueuing 100 in Queue:\n");
    enqueue(q,100);
    traverse(q);
}
