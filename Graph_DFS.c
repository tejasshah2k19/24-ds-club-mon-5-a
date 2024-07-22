#include <stdio.h>

struct edge
{
    int src;
    int dest;
};

int main()
{

    struct edge e[8];
    int i;
    int visited=1; 
    int start = 9; 
    for (i = 0; i < 8; i++)
    {
        printf("\nSrc - Dest");
        scanf("%d%d", &e[i].src, &e[i].dest);
    }


    printf("\n%d ",start);
    for (i = 0; i < 8; i++)
    {
        if(visited == 4){
            break; 
        }
        if(e[i].src == start ){
            visited++;
            printf(" %d",e[i].dest);
            start = e[i].dest; 
        }

    }
        //9-> ?


    return 0;
}