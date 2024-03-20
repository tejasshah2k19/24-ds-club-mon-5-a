#include<stdio.h>
#define SIZE 10 

int a[]={300,40,5,6,70,89,9,80,70,60};
//        i                        j
void linearSearch(int key){
    int i; 
    int success = 0; 
    for(i=0;i<SIZE;i++){
        if(a[i] == key){
            success = 1;
            printf("\n%d Found",key);  
            break;
        } 
    }

    //success => 0
    if(success == 0 ){
        printf("\n%d Not Found",key);
    }
}

int main(){
    linearSearch(700); 
}

//time -> O(n) ->  