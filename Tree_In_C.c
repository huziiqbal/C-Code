
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node * left ;
    struct node * right ;
};

struct node * create (int data){
    struct node * n ;
    n = (struct node*)malloc( sizeof(struct node));

    n -> data  =  data ;
    n -> left = NULL;
    n -> right = NULL;
    return n ;
}

struct node * insert (struct node * root , int data){
    if ( root == NULL){
        return create(data);
    }

    if ( data < root -> data){
        root->left = insert ( root-> left , data);
    }

    else if ( data > root -> data){
        root->right = insert ( root-> right , data);
    }

    return root ;
}


void preorder(struct node * root){
    if (root == NULL){
        return ;
    }

    printf("%d ",root -> data);

    preorder(root->left);

    preorder(root->right);
}
void postorder(struct node * root){
    if (root == NULL){
        return ;
    }

    postorder(root->left);

    postorder(root->right);

    printf("%d ",root -> data);
}
void inorder(struct node * root){
    if (root == NULL){
        return ;
    }

    inorder(root->left);

    printf("%d ",root -> data);

    inorder(root->right);
}


int main()
{
    struct node* root = NULL;

    int rootValue ;
    int n ;
    printf("Enter the number of nodes in tree:")
    scanf("%d",&n);

    printf("Enter the first root value: ");
    scanf("%d",&rootValue);

    root  = insert(root, rootValue);

    printf("Enter the nodes value: ");
    for (int i =0 ; i < n ; i ++){
        int nodeValue ;
        scanf("%d",&nodeValue);

        root = insert(root,nodeValue);

    }



    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");

    printf("Inorder Traversal: ");
    inorder(root);


    return 0;
}
