#include <stdio.h>
#include <stdlib.h> //malloc calloc free

// node -> [int data,*next]

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL, *last = NULL;


//insert at last . end 
void addNode(int num)
{ // 30
    struct node *tmp = NULL;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        tmp->prev = last; // X
        last->next = tmp;
        last = tmp;
    }
}

void display()
{
    struct node *p;

    for (p = head; p != NULL; p = p->next)
    {
        printf(" %d", p->data);
    }
}

void revDisplay()
{
    struct node *p;
    for (p = last; p != NULL; p = p->prev)
    {
        printf(" %d", p->data);
    }
}

void addBeg(int num)
{
    struct node *tmp;
    // atleast 1 node
    if (head == NULL)
    {
        addNode(num);
    }
    else
    {
        tmp = malloc(sizeof(struct node *));
        tmp->data = num;
        tmp->next = head;
        tmp->prev = NULL;
        head->prev = tmp;
        head = tmp;
    }
}


void insertAtAnyAfter(int key,int num){
    struct node *p  = head; 
    struct node *tmp = NULL;
    while(p!=NULL){
        if(p->data == key){
            break;
        }
        p=p->next;
    }

    if(p==NULL){
        //wrong 
        printf("\nInvalid Key");
    }else{
        tmp = malloc(sizeof(struct node));
        tmp->data=num;
        tmp->next = p->next; 
        tmp->prev = p; 
        p->next  = tmp; 
        tmp->next->prev= tmp; 
    }
}

void delLast(){

    struct node *p = last; 
    last = last->prev; 
    last->next = NULL; 
    free(p); 


}

void delBeg(){

}

void rotate(){

    addBeg(last->data);
    delLast();
}

int main()
{

    // 10
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);
    printf("\nNormal Display\n");
    display();
    printf("\nReverse Display\n");
    revDisplay();

    addBeg(5);
    printf("\nNormal Display\n");
    display();
    printf("\nReverse Display\n");
    revDisplay();
    delLast();
    
    printf("\nNormal Display\n");
    display();
    printf("\nReverse Display\n");
    revDisplay();
   
    return 0;
}