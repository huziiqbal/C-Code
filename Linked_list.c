#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;

};

void traverse( struct Node* head ){

    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp-> data);
        temp = temp->next;
    }
}

struct Node* insertion(struct Node* head ){
    struct Node * new;
    new = (struct Node*)malloc(sizeof(struct Node));

    new -> data = 50;
    new -> next = head;
    return new;

}
int main (){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 10 ;
    head -> next = second;
    second -> data = 20 ;
    second -> next = third;
    third -> data = 30 ;
    third -> next = NULL;

    head = insertion(head);
    traverse(head);

}
