#include<stdio.h> 
#define SIZE 10

int a[] = {34, 56, 78, 90, 9, 8, 76, 54, 33, 45};

void bubbleSort()
{

    int i, j, tmp;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main(){


}