#include <stdio.h>
#define R 4
#define C 4

int a[R][C];

void scanArray()
{
    int i;
    int j;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("\n%d is connected with %d  ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}

void displayArray()
{

    int i;
    int j;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf(" %d",  a[i][j]);
        }
        printf("\n");
    }
}

void printConnectedNode(int node){
    //3
    int i;
    for(i=0;i<C;i++){
        if(a[node][i]){//10 11 12 13 
            printf(" %d",i);
        }
    }
}
int main(){
    scanArray();
    displayArray();
    printConnectedNode(2);
    
    return 0;
}