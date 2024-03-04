#include<stdio.h>
#include<stdlib.h> 
#define SIZE 50 

char stack[SIZE]; 
int top = -1; //empty 

void push(char num)
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
    printf("\n");
    for(i=top;i>=0;i--){
        printf("%c",stack[i]);
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
        printf("\n%c pop",stack[top]);
        top--; 
    }
}


int main(){
   
    int i;
    char data[50];
    printf("\nEnter Data");
    scanf("%s",&data); //royal\0  

    for(i=0;data[i]!='\0';i++){
        push(data[i]);//r o y a l 
    }

    display(); 
    

   
   
     return 0; 
}