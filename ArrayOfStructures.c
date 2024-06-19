#include<stdio.h>
#include<conio.h>
struct class
{
    char name[20];
    int m1;
    int m2;
    int m3;
    float avg;
    
};

int main()

{
    struct class st[50];
    int i,n;
    printf("Please enter number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter Student details: ");
    printf("\nEnter name of student %d:",i+1);
    scanf("%s",&st[i].name);
    printf("Enter marks of three subjects:");
    scanf("%d %d %d",&st[i].m1,&st[i].m2,&st[i].m3);
    st[i].avg=(st[i].m1+st[i].m2+st[i].m3)/3;

    
    }

    printf("Name       marks1  marks2  marks3  average\n");
    for(i=0;i<n;i++)
    {
        printf("%-10s %7d %7d %7d %7.2f\n",st[i].name,st[i].m1,st[i].m2,st[i].m3,st[i].avg);
    }
    
        return 0;
}