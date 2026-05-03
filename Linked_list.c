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
    printf("\n");
}
// void deleteAtBeginning(struct Node* head) {
//     if (head == NULL) {
//         printf("List is empty");
//         return;
//     }
//     struct Node* temp = head;
//     head = head->next;
//     traverse(temp);
// }

// struct Node* insertion(struct Node* head ){
//     struct Node * new;
//     new = (struct Node*)malloc(sizeof(struct Node));

//     new -> data = 50;
//     new -> next = head;
//     return new;

// }

int insertionAtBegining(struct Node* head ,int data){
    struct Node* newNode = ( struct Node*)malloc ( sizeof ( struct Node));
    newNode -> data = data;
    newNode-> next = head ;
    head = newNode;
    return head ;

}
int insertionAtEnd(struct Node* head ,int data){
    struct Node* newNode = ( struct Node*)malloc ( sizeof ( struct Node));
    struct Node* p = head;
    newNode -> data = data;
    while ( p->next != NULL){
        p = p-> next;
    }

    newNode-> next = NULL;
    p -> next  = newNode;

    return head ;

}
int insertionAtNode(struct Node* head ,int data , int index){
    struct Node* newNode = ( struct Node*)malloc ( sizeof ( struct Node));
    struct Node* p = head;
    int i = 0 ;
    while ( i != (index - 1)){
        p = p-> next;
        i++;
    }
    newNode -> data = data;
    newNode-> next = p ->next;
    return head ;
    p -> next  = newNode;


}

int deletionAtBegining(struct Node* head ){
    struct Node* p = head;
    head = p->next;
    return head;

}
int DeletionAtEnd(struct Node* head){
    struct Node* p = head;
    while ( p->next->next != NULL ){
        p = p-> next;
    }
    p -> next = NULL;
    free(p);
    return head;
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

    printf("before insertion\n");
    traverse(head);
    // printf("After inserting 34 in the begining\n");
    // head = insertionAtBegining(head , 34 );
    // traverse(head);
    // printf("After inserting 23 in the end\n");
    // insertionAtEnd(head , 23);
    // traverse(head);
    // printf("After inserting 78 at index 2\n");
    // insertionAtNode(head ,78,2);
    // traverse(head);
    // head = deletionAtBegining(head);
    // printf("After deletion\n");
    // traverse(head);
    printf("After deletion from end\n");
    head = DeletionAtEnd(head);
    traverse(head);



}

