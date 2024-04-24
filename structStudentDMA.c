#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int age;
    struct student *next;
};

int main()
{

    struct student *s;

    // add student

    s = malloc(sizeof(struct student));
    printf("\nEnter name and age");
    scanf("%s%d", s->name, s->age);
    s->next = NULL; 
    //self referntial structure 
    return 0;
}
