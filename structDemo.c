#include<stdio.h>
#include<malloc.h>

struct student{
    char name[30];
    int c,cpp,java;
    float perc; 
}; 
//30+12+4 => 46  
int main(){
    // struct student s;//name c cpp java perc 

    // //static - implicit - self  
    // //dynamic - explicit - 

    // printf("\nEnter name");
    // scanf("%s",&s.name);

    // printf("\nEnter marks of c cpp and java");
    // scanf("%d%d%d",&s.c,&s.cpp,&s.java); 

    // s.perc = (s.c+s.cpp+s.java)/3.0;

    // printf("\nName = %s\nC = %d\nCpp = %d\nJava = %d\nPerc = %f",s.name,s.c,s.cpp,s.java,s.perc); 



    //dynamic memory allocate 
    struct student *s;//name c cpp java perc 

    //static - implicit - self  
    //dynamic - explicit - 

    s = malloc(sizeof(struct student));

    printf("\nEnter name");
    scanf("%s",&s->name);

    printf("\nEnter marks of c cpp and java");
    scanf("%d%d%d",&s->c,&s->cpp,&s->java); 

    s->perc = (s->c+s->cpp+s->java)/3.0;

    printf("\nName = %s\nC = %d\nCpp = %d\nJava = %d\nPerc = %f",s->name,s->c,s->cpp,s->java,s->perc); 

    return 0;
}