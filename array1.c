#include<stdio.h>
#define SIZE 5 

int a[5]; 


int main(){

    int i;
    int min; 
    //array scan -> user value 
    printf("\nEnter 5 values");
    for(i=0;i<SIZE;i++){
        scanf("%d",&a[i]); //
    }

    //0 0  3 2 1  
    //3 2 1 0 0 
    //find minimum
    min = a[0];  //3 



    for(i=0;i<SIZE;i++){// 0 1 2 3 
        if(a[i] == 0 )
            continue;
        if( min == 0 || min > a[i] ){
            min = a[i]; //1 
        }
    }

    printf("\n min = %d",min);

    return 0; 
}


