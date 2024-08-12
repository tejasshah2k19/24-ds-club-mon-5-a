#include <stdio.h>
#include <stdlib.h>

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
        return lh;
    else
        return rh;
}

int calculateBF(struct node *root)
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

    return lh - rh;
}

struct node *leftRotate(struct node *x)
{
    struct node *xr = x->right;
    x->right = xr->left;
    xr->left = x;
    return xr;
}

struct node *rightRotate(struct node *x)
{
    struct node *xl = x->left;
    x->left = xl->right;
    xl->right = x;
    return xl;
}
struct node *addNode(struct node *root, int num)
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = num;
        root->left = NULL;
        root->right = NULL;
        root->height = 1;
        return root;
    }
    else
    {
        if (num > root->data)
        {
            // right
            root->right = addNode(root->right, num);
        }
        else
        {
            // left
            root->left = addNode(root->left, num);
        }

        root->height = 1 + calculateHeight(root);

        // bf
        // bf = lh  - rh
        int bf = calculateBF(root);

        if (bf < -1)
        {
            printf("\nRight Imbalance = %d for %d", bf, root->data);
            if (num > root->right->data)
            {
                printf("\nRR");
                return leftRotate(root);
            }
            else
            {
                printf("\nRL"); // 30
                root->right = rightRotate(root->right);
                return leftRotate(root);
            }
        }
        if (bf > 1)
        {
            printf("\nLeft Imbalance = %d for %d", bf, root->data);
            if (num > root->left->data)
            {
                printf("\nLR");
            }
            else
            {
                printf("\nLL");
                return rightRotate(root);
            }
        }

        return root;
    }
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        // left root right
        inOrder(root->left);
        printf(" %d(%d) ", root->data, root->height);
        inOrder(root->right);
    }
}

int main()
{

    struct node *root = NULL;
    // root = addNode(root, 30);
    // addNode(root, 40);  // 30->right
    // addNode(root, 20);  // 30->right
    // addNode(root, 100); // 40->right
    // addNode(root, 5);   // 20->left

    // tree ->
    //

    // RR
    // root = addNode(root, 30);
    // root = addNode(root, 40);
    // root = addNode(root, 50);

    // inOrder(root);// 30 40 50

    // printf(" %d", root->data);        // 40
    // printf(" %d", root->left->data);  // 30
    // printf(" %d", root->right->data); // 50

    //    LL
    //     root = addNode(root, 30);
    //     root = addNode(root, 20);
    //     root = addNode(root, 10);

    // inOrder(root);// 10 20 30

    // printf(" %d", root->data);        // 20
    // printf(" %d", root->left->data);  // 10
    // printf(" %d", root->right->data); // 30

    // RL
    // root = addNode(root, 30);
    // root = addNode(root, 50);
    // root = addNode(root, 40);

    // // inOrder(root);// 30 40 50
    // printf(" %d", root->data);        // 40
    // printf(" %d", root->left->data);  // 30
    // printf(" %d", root->right->data); // 50

    // LR
    // root = addNode(root, 30);
    // addNode(root, 20);
    // addNode(root, 25);

    return 0;
}