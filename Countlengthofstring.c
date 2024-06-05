#include<stdio.h>
#include<conio.h>
int main()
{
    int i,count=0;
    char a[30];
    printf("Please enter String:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("The length of string is : %d",count);
    return 0;
}