#include<stdio.h>
#include<stdlib.h>


int main(){
    int *a,*b,*c;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int)); 

    printf("\nEnter two values");
    scanf("%d%d",a,b); 
 
    *c = *a + *b;

    printf("\n %d + %d = %d",*a,*b,*c);  
    return 0;
}