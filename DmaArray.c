#include<stdio.h>   
#include<stdlib.h>

int main(){

    int *p; 
    int i;
    int sum=0; 
    p = calloc(5,sizeof(int)); 

    for(i=0;i<5;i++){
        printf("\nEnter value");
        scanf("%d",&p[i]);
    }


    for(i=0;i<5;i++){
       sum = sum + p[i];
    }

    printf("\n sum = %d",sum);
    return 0; 
}