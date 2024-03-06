#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int q[SIZE];

int f = -1, r = -1;

void insert(int num)
{
    if (r == SIZE - 1 && f == 0)
    {
        printf("\n Q is Full");
    }
    else if (r == f - 1)
    {
        printf("\n Q is Full");
    }
    else
    {
        if (r == SIZE - 1)
        {
            r = 0;
            q[r] = num;
        }
        else
        {
            r++;
            q[r] = num;

            if (f == -1)
                f = 0;
        }
    }
}

void display()
{
    int i;
    if (r >= f)
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
    else
    {
        for (i = f; i < SIZE; i++)
        {
            printf(" %d", q[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
}

void removeQ()
{
    if (f == -1)
    {
        printf("\nQueue is Empty");
    }
    else if (f == r)
    {
        printf("\n%d removed", q[f]);
        f = -1;
        r = -1;
    }
    else if (f == SIZE - 1)
    {
        printf("\n%d removed", q[f]);
        f = 0;
    }
    else
    {
        printf("\n%d removed", q[f]);
        f++;
    }
}

int main()
{

    int choice, num;
    while (3)
    {
        printf("\n0 For Exit\n1 for Insert\n2 For Display\n3 for Remove\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            display();
            break;
        case 3:
            removeQ();
            break;
        case 0:
            exit(0);

        default:
            printf("\nInvalid Choice");
            break;
        }
    }
    return 0;
}