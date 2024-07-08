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
        printf("\n%d NotFound", key);
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
    { // left
        search(root->left, key);
    }
}

void max(struct node *root)
{

    if (root == NULL)
    {
        return;
    }
    else if (root->right == NULL)
    {
        printf(" \n max =  %d", root->data);
    }
    else
    {
        max(root->right);
    }
}
// 5 10 15 20 25 30 40 

void kThSmallest(struct node *root, int k)//20{0}   10{1}   15{1} 
{
        static int count =0;//memory - 1 time 
    if (root != NULL)//15
    {
        kThSmallest(root->left, k);
        // printf(" |%d|\n  ", root->data);
        count++;
        if (k == count)
        {
            printf(" |%d|\n  ", root->data);
            exit(0);
        }
        kThSmallest(root->right, k);
    }
}
int main()
{

    struct node *root = NULL;
    root = addNode(root, 20);

    addNode(root, 30);
    addNode(root, 40); // 30,20

    addNode(root, 10);
    addNode(root, 15);
    addNode(root, 5);
    addNode(root, 25);

    inOrder(root);
    printf("\n");
    kThSmallest(root, 3);
    return 0;
}