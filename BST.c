#include<stdio.h>
#include<stdlib.h>

struct node{
    int data; 
   struct node *left;
   struct node *right; 
};


struct node* addNode(struct node *root,int data){
    if(root == NULL){
        root = malloc(sizeof(struct node));
        root->data = data; 
        root->left=NULL;
        root->right = NULL;
      
    }else if(data > root->data){
        //right
        struct node *tmp = malloc(sizeof(struct node));
        tmp->data = data; 
        tmp->left = NULL;
        tmp->right = NULL ;
        root->right = tmp;

    }else{
        //left  
        struct node *tmp = malloc(sizeof(struct node));
        tmp->data = data; 
        tmp->left = NULL;
        tmp->right = NULL ;
        root->left = tmp;
    }
    return root; 
}

int main(){

    struct node *root=NULL ;
    root =  addNode(root,30);
    printf("%d ",root->data);
   
    addNode(root,35);
    addNode(root,20);

    printf("\n %d %d %d",root->data,root->left->data,root->right->data);
    return 0;
}