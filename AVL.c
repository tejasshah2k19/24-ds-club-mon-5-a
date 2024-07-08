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

int calculateHeight(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if (root->left != NULL)
    {
        lh = root->left->height;
    }
    if (root->right != NULL)
    {
        rh = root->right->height;
    }

    if (lh > rh)
    {
        return lh + 1;
    }
    else
    {
        return rh + 1;
    }
}

struct node *addNode(struct node *root, int data) // 50,120 100,120 NULL,120
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->height = 1;
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

        // after the insertion
        root->height = calculateHeight(root);
    }

    return root;
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d(%d)", root->data,root->height);
        inOrder(root->right);
    }
}
int main()
{

    struct node *root = NULL;

    root = addNode(root, 30);

    addNode(root, 40);
    addNode(root,10);
    addNode(root,50); 
    //  printf("\n %d  %d  %d %d ",root->data,root->height,root->right->data,root->right->height);
    inOrder(root);


    return 0;
}