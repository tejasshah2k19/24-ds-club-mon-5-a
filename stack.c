#include<stdio.h>
#include<stdlib.h> 
#define SIZE 5 

int stack[SIZE]; 
int top = -1; //empty 

void push(int num)
{

    if(top == SIZE - 1){
        printf("\nStack OVERFLOW");
    }else{ 
        top++;
        stack[top] = num; 
    }
}

void display(){
    int i; 
    for(i=top;i>=0;i--){
        printf("\n%d",stack[i]);
    }
}


int main(){
    int num,choice; 

    while(-1){ //1 true 0 false -1  
        printf("\n1 For PUSH\n2 For Display\n0 For Exit\nEnter your choice");
        scanf("%d",&choice);  

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d",&num);
            push(num);
            break;
        case 2*1:
            display();
            break;
        case 0 :exit(1); 
        
        default:
            printf("\nINVALID CHOICE PTA");
            break;
        }//switch 
    }//while 
    return 0; 
}