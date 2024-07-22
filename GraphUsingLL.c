#include<stdio.h>


struct edge{
        int src; 
        int dest; 
};

int main(){

    int totalEdge,i;
    struct edge e[10];//src dest 
    int s,d; 
    printf("\nHow many Edges you want to add?");
    scanf("%d",&totalEdge);//4 

    for(int i=0;i<totalEdge*2;i++)//0 2 
    {
        printf("\nEnter source and destination");
        scanf("%d%d",&s,&d);//7 9 

        e[i].src = s;//7 
        e[i].dest = d; //9 
        i++;//1 
        e[i].src = d;//9
        e[i].dest = s;//7

        
    }


    for(int i=0;i<totalEdge*2;i++)
    {
        printf("\n%d connected with %d",e[i].src,e[i].dest);
    }

    return 0; 
}