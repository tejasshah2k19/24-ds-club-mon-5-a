#include<stdio.h>
#include<stdlib.h>


//4 
int graph[4][4];


int main(){
    int i,j; 
    int node; 
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\n%d is conntected with %d",i,j);//0 0 ->1 0 
            scanf("%d",&graph[i][j]);//0 
        }
    }

    node = 0 ;//0 node -> connected? 


    for(i=0;i<4;i++){
        if(graph[node][i] == 1){ //00 01 02 03 
            printf(" %d",i);//1 3 
        }
    }

    return 0; 
}