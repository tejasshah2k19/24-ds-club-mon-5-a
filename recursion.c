#include <stdio.h>

void print(int count)
{ // 0
    if (count != 0)
    {
        printf("\nWelcome....."); // welcome welcome welcome
        // base case ---> condition -> break the recursion
        print(count - 1);
    }
}

void print1(int num)
{
    if (num != 0)
    {
        printf(" %d", num); // 10 9 8 7 6 5 4 3 2 1
        print1(num - 1);
    }
}

void print2(int num)
{ // 10 9 8 7 6 5 4 3 2 1
    if (num != 0)
    {
        // 10 9 8 7 6 5 4 3 2 1
        print2(num - 1);
        printf(" %d", num); // 1
    }
}

int fact(int num)
{ // 5
    if (num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}

int sum(int num)//10
{

    if (num == 0)
        return 0;
    if (num % 3 == 0)
    {
        return num + sum(num - 1);
    }
    else
    {
        return 0 + sum(num - 1);
    }
}
//0+9+0+0+6+0+0+3+0+0+0 

int main()
{
    int ans;
    //    print2(10); //10

    // ans = fact(5); //
    // printf("\nans = %d",ans);
    // printf("\n ans = %d",fact(4));

    printf("\nSum = %d", sum(10)); // return sum of all numbers who can divide by 3
    //   3 + 6 + 9 => 18
    printf("\nSum = %d", sum(3)); // 3
    return 0;
}
