#include<stdio.h>
#define SIZE 10

void divide(int c[],int l,int u){ //0 6

    int mid = (u+l)/2; // 4

    //l : 0 
    //mid : 4 
    //u : 9
    if(l < u){ 
        //0 1 2 3 4 
        printf("\n%d %d %d",l,mid,u);//0-4-9  0-2-4  0-1-2   0-0-1
         divide(c,l,mid); 
        //5 6 7 8 9 
        divide(c,mid+1,u);
    }
}

void print(int i){//5 4 3 2 1 0 
    if(i !=0){ 
        print(i-1);//
        printf("\n%d",i); // 
    }
}

 
int main(){
    int c[] = {1,2,3,4,5,6,7,8,9,10};
    divide(c,0,SIZE-1);//0,9 
  //  print(5); //


  
    return 0;
}
