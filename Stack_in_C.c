#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

int isempty( struct stack * ptr){
    if (ptr -> top == -1){
        return 1;
    }
    else{
        return 0;
    }

}
int isfull( struct stack * ptr){
    if (ptr -> top == ptr-> size - 1){
        return 1;
    }
    else{
        return 0;
    }

}

void push (struct stack * ptr , int val){
    if (isfull(ptr)){
        printf("Stackoverflow\nCant push %d into the stack\n",val);
    }
    else {

        ptr -> top = ptr -> top + 1 ;
        ptr -> arr[ptr ->top] = val;
    }
}
int pop ( struct stack * ptr ){
    if( isempty(ptr)){
        printf("StackUnderflow! Nothing present to pop\n");
    }
    else {

        int val = ptr -> arr[ptr -> top];
        ptr -> top = ptr -> top - 1 ;
        return val;
    }

}
int peek(struct stack* ptr , int i ){
    if ((ptr-> top - i + 1) < 0){
        printf("Not valid input");
    }
    else{
        return ptr -> arr[ptr -> top - i + 1];
    }
}
int traverse ( struct stack * ptr){
    for( int i = 0 ; i <= ptr->top ; i++){
            printf("%d \n",ptr->arr[i]);
    }
}

int main()
{
    // method 1 :
    // struct stack S;
    // S.size = 20;
    // S.top = -1;
    // S.arr = (int *) malloc (S-> size * sizeof(int));

    // method 2:
    struct stack *S = (struct stack *) malloc(sizeof(struct stack));
    int value;
    S-> size = 10;
    S-> top = -1;
    S-> arr = (int *) malloc (S-> size * sizeof(int));
    printf("Enter the value for the stack");
    for( int i = 0  ; i < (S-> size) ; i++ ){
        scanf("%d",&value);
        push(S,value);
    }

    // printf("Your stack is \n");
    // traverse(S);
    printf("The peeked element is : %d",peek(S,5));
    // peek(S , 5);
    // printf("The popped value is %d\n",pop(S));
    // printf("Stack after pop operation\n");
    // traverse(S);

}
