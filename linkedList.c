#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *last = NULL; // linked list is empty

void addNode(int n)
{
    struct node *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = n;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = n;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}
void display()
{
    struct node *p;

    printf("\n");
    if (head == NULL)
    {
        printf("\nLinkedList is Empty");
    }
    else
    {
        p = head;

        while (p != NULL)
        {
            printf(" %d", p->data); // 10
            p = p->next;
        }
    }
}

void addBeg(int n)
{
    struct node *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = n;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = n;
        tmp->next = head;
        head = tmp;
    }
}

void addAnyAtAfter(int key, int n)
{
    struct node *p, *tmp;
    p = head;

    while (p != NULL)
    {
        if (p->data == key)
        {
            break;
        }
        p = p->next;
    }

    if (p == NULL)
    {
        printf("\nInvalid Key PTA");
    }
    else
    {

        if (p == last)
        {
            addNode(n);
        }
        else
        {
            tmp = malloc(sizeof(struct node));
            tmp->data = n;
            tmp->next = p->next;
            p->next = tmp;
        }
    }
}

void deleteBeg()
{
    struct node *p;
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        last = NULL;
    }
    else
    {
        p = head;
        head = head->next;
        free(p);
    }
}

void delLast()
{
    struct node *p;

    if (head == last)
    {
        free(head);
        head = NULL;
        last = NULL;
    }
    else
    {
        p = head;

        while (p->next != last)
        {
            p = p->next;
        }

        p->next = NULL;
        free(last);
        last = p;
    }
}

int main()
{

    addNode(100);
    addNode(200);
    addNode(400);
    addNode(500);

    // printf("\n%d %d %d",head->data,head->next->data,head->next->next->data);
    display();
    addBeg(50);
    display();
    //   sumOfLinkedList(); // return 100+200+400+500 => 1200
    // maxOfLinkedList(); // 500

    search(25);  // not found
    search(400); // found

    return 0;
}
