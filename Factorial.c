#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,fac=1;
    printf("Enter number for factorial");
    scanf("%d",&n);
    while(i<=n)
    {
        fac=fac*i;
        i=i+1;
    }
    printf("factorial%d",fac);
    return 0;
}
