#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,s=1;
    printf("Enter number for factorial");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s*i;
        i=i+1;
    }
    printf("sum%d",s);
    return 0;
}