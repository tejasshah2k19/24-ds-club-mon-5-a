#include<stdio.h>
#define SIZE 10 

int a[]={234,56,78,98,7,6,543,223,45,678};

void display(){
    int i;
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}

void insertionSort(){
    int i,j,tmp; 

    for(i=1;i<SIZE;i++){
        tmp = a[i];
        for(j=i-1;j>=0;j--){
            if(tmp < a[j]){
                a[j+1] = a[j];
            }else{
                break; 
            }
        }
        a[j+1] = tmp; 
    }
}

int main()
{

    printf("\nArray before sorting!!!\n");
    display();
    insertionSort();
    printf("\nArray after Sorting!!!\n");
    display();


    return 0; 
}