#include<stdio.h>
#include<stdlib.h>


int main(){

    int *p; 
    int *a; 
    int i; 
    p = malloc(sizeof(int)); //TC 
    printf("\nEnter number");
    scanf("%d",p);
    printf("\np = %d",*p);//value at p ;

    a = calloc(5,sizeof(int)); //5*4 = 20 

    for(i=0;i<5;i++){
        printf("\nEnter number");
        // scanf("%d",&a[i]);//a[0]
        scanf("%d",a+i);
    }
    //a->base address -> 0th index address 
    //a[0] 

    //a 
    //a[0]
    
    for(i=0;i<5;i++){
        printf("\n%d",a[i]);
    }

    return 0; 
}