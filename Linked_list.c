#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void traverse(struct Node* ptr){
    while(ptr!=NULL){
    printf("%d -> ",ptr->data);
    ptr = ptr->next;
    }
}
int main() {
    struct Node* head = (struct Node *)malloc(sizeof(struct Node));
    struct Node* second = (struct Node *)malloc(sizeof(struct Node));
    struct Node* third = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 17;
    second -> next = third;

    third -> data = 23;
    third -> next = NULL;

    printf("Linked list: ");

    traverse(head);
    printf("NULL");

}
