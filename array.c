#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int a[SIZE]; //{0,0,0,0,0} -> extern 

void insert(int location,int data);
void display(); 

int main(){

    int choice ;
    int location,data; 

    while(-1){ 
    printf("\n1 For Insert\n2 For Display\n0 Exit");
    scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Location and Data");
                scanf("%d%d",&location,&data); 
                insert(location,data);
                break;
            case 2:
                display();
                break;  
            case 2-2:
                    exit(0);

            
            default:
                break;
        }
    }
    return 0; 
}

void insert(int location, int data){
    int i; 
    //0 1 2 3 4 
   //     i
    //location 3 , data 30 
    for(i=SIZE-1;i>=location;i--){
        a[i] = a[i-1];
    }
    a[i] = data; 

}

void display(){
    int i;
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}