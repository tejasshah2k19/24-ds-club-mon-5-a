#include<stdio.h>
#include <stdlib.h>

struct node {
    int data; 
    struct node *left;
    struct node *right;

}*root=NULL;

int main(){


    //500
    root = malloc(sizeof(struct node));
    //malloc -> single block [ X | Y | Z ]
    //calloc -> same size 
    root->data = 500; 
    root->left = NULL;
    root->right = NULL;

    struct node *tmp = malloc(sizeof(struct node));
    tmp->data = 30; 
    tmp->left = NULL;
    tmp->right=NULL; 
    root->left = tmp;

    tmp  = malloc(sizeof(struct node)) ;
    tmp->data = 300; 
    tmp->left = NULL;
    tmp->right=NULL; 
    root->right = tmp;


    printf("\n%d %d %d",root->data,root->left->data,root->right->data);

    return 0; 
}