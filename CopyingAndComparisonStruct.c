#include<stdio.h>
#include<conio.h>
struct class
{
    int number;
    char name[20];
    float marks;
};

int main()
{
    int x;
    struct class student1={1,'sneha',98.9};
    struct class student2={2,'riya',78.6};
    struct class student3;
    student2=student3;
    x=((student3.number==student2.number)&& (student3.marks==student2.marks))?1:0;
    if(x==1)
    {
        printf("Student 2 and student 3 are same");
    }
    else
    {
        printf("Stuent 2 and student 3 are not same");
    }
    
    
    return 0;
}