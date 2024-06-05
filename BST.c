#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data)
{ // 30,50  35,50  NULL,50
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if (data > root->data)
    {
        // right
        root->right = addNode(root->right, data); // NULL,35
    }
    else
    {
        // left
        root->left = addNode(root->left, data); // NULL,20
    }
    return root;
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void search(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("\n%d NotFound",key);
    }
    else if (root->data == key)
    {
        printf("\n %d Found", key);
    }
    else if (key > root->data)
    {
        // right
        search(root->right, key);
    }
    else
    {   //left 
        search(root->left, key);
    }
}


void max(struct node *root){

    if(root == NULL){
        return; 
    }
    else if(root->right == NULL){
        printf(" \n max =  %d",root->data);   
    }else{
        max(root->right);
    }

}
int main()
{

    struct node *root = NULL;
    root = addNode(root, 30);
    // printf("%d ",root->data);

    addNode(root, 35);
    addNode(root, 20); // 30,20

    // printf("\n %d %d %d",root->data,root->left->data,root->right->data);

    addNode(root, 50);

    // printf("\n %d %d %d %d",root->data,root->left->data,root->right->data,root->right->right->data);

    // tree travesal

    // inOrder    left-root-right
    // preOrder   root-left-right
    // postOrder  left-right-root

    // inOrder(root);
    //  preOrder(root);

    search(root, 45);
    search(root, 450);
    search(root, 20);
    search(root, 50);


    max(root); //print max node from tree  

    return 0;
}