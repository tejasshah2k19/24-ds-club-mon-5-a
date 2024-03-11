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

int peek(){
    return stack[top];//int  
}

void pop()
{
    if(top == -1 ){
        printf("\nStack is Empty");
    }else{
        printf("\n%d pop",stack[top]);
        top--; 
    }
}

void peep(int location){
    int index = top - location + 1 ; 
    if(index >= 0 && index <= top ){
        printf("\n %d ",stack[index]);
    }
}


int main(){
    int num,choice; 

    while(-1){ //1 true 0 false -1  
        printf("\n0 For Exit\n1 For PUSH\n2 For Display\n3 For Peek\n4 For Pop\nEnter your choice");
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
        case 3:
            printf("\n top of the stack = %d",peek());
            break;
        case 4:
            pop();
            break; 
        case 0 :exit(1); 
        
        default:
            printf("\nINVALID CHOICE PTA");
            break;
        }//switch 
    }//while 
    return 0; 
}