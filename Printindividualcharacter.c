#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char a[30];
    printf("Please enter your name:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        printf("\n%c",a[i]);
    }
    return 0;
}