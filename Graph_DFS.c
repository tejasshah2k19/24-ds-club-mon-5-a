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
    int visited[] = {0, 0, 0, 0}; // 0 1 2 3 4 5 6 7  -> 0
    int src, dest;

    int start = 9;
    for (i = 0; i < 8; i++)
    {
        printf("\nSrc - Dest");
        scanf("%d%d", &src, &dest);
        e[i].src = src;
        e[i].dest = dest;

        i++;
        e[i].src = dest;
        e[i].dest = src;
    }

    printf("\nEnter Inital Vertex");
    scanf("%d", &start); // 0

    printf("\n%d ", start); // 0
    visited[start] = 1;

    for (i = 0; i < 8; i++) // i:0
    {

        if (e[i].src == start && visited[e[i].dest] == 0)
        {
            printf(" %d", e[i].dest); // 1
            start = e[i].dest;        // 1
            visited[start] = 1;  
        }
    }

    // 9-> ?

    return 0;
}