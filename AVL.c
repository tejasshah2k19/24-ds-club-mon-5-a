#include <stdio.h>
#include <stdlib.h>

// node
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height; 
};

struct node *addNode(struct node *root, int data) // 50,120 100,120 NULL,120
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        if (root->data < data)
        {
            // right
            root->right = addNode(root->right, data); // NULL
            // 50->right = addNode(100,120);
            // 100->right = addNode(NULL,120);
            
        }
        else
        {
            // left
            root->left = addNode(root->left, data);
        }
    }

    return root;
}
int main()
{

    struct node *root = NULL;

    root = addNode(root, 10);

    printf(" %d ",root->data);//10 
 
    
    
    
    
    addNode(root, 30);

    return 0;
}