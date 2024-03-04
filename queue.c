#include<stdio.h>
#include<stdlib.h>

#define SIZE 5 

int queue[SIZE]; 

int f=-1,r=-1; //empty 

void insert(int num)
{
    if(r == SIZE - 1){
        printf("\nQ is full");
    }else{
        r++;
        queue[r] = num; 

        if(f == -1)
            f++; 
    }
}


void display(){
    int i;

    for(i=f;i<=r;i++){
        printf(" %d",queue[i]); 
    }
}

void removeQ(){
    if(f==-1){
        printf("\nQ is Empty");
    }else{
        printf("\n%d is removed",queue[f]);
        if(f == r){
            f=-1;
            r=-1;
        }else{
            f++;
        }
    }
}

int main(){

    int choice,num; 
    while(1){ 
        printf("\n1 For Insert\n2 For Remove\n3 For Display\n0 For Exit\nEnter choice");
        scanf("%d",&choice); 

        switch (choice)
        {
            case 1:
                printf("\nEnter number");
                scanf("%d",&num);
                insert(num); 
                break;
            case 2:
                removeQ();
                break;
            case 3:
                display();
                break;
            case 0:
                exit(9); 
            default:
                printf("\nInvalid Choice PTA");
                break;
        }
    }
    return 0; 
}
