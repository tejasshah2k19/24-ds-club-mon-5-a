#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

struct student
{
    char name[30];
    int age;
};

struct student s[SIZE]; // s[0] s[1] s[2] s[3] s[4]
int count = 0;
void addData()
{
    if (count == SIZE)
        printf("\nQuota IS Full");
    else
    {
        printf("\nEnter name and age");
        scanf("%s%d", &s[count].name, &s[count].age);
        count++;
    }
}

void display()
{
    int i;
    printf("\nName  Age");
    for (i = 0; i < count; i++)
        printf("\n%s  %d", s[i].name, s[i].age);
}

int main()
{
    int choice;

    while (-1)
    {
        printf("\n1 For AddStudent\n2Display all students\n0 For exit");
        printf("\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            addData();
            break;
        case 2:
            display();
            break;

        default:
            printf("\nPTA");
            break;
        }
    }
}