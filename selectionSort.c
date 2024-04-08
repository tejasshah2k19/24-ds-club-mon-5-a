#include<stdio.h>
#define SIZE 10 

int a[]={234,56,78,98,7,6,543,223,45,678};

void display(){
    int i;
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}

void selectionSort(){
    int i,j,min,tmp; 

    for(i=0;i<SIZE;i++){
        for(j=i+1,min=i;j<SIZE;j++){
            if(a[min] > a[j]){
                min = j; 
            }
        }
        tmp = a[i]; 
        a[i] = a[min];
        a[min] = tmp; 
    }
}

int main()
{

    printf("\nArray before sorting!!!\n");
    display();
    selectionSort();
    printf("\nArray after Sorting!!!\n");
    display();


    return 0; 
}