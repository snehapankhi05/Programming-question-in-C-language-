#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,count=0;
    printf("Enter your number");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            count=count+1;
        }
        i=i+1;
        
    }
    if(count==2)
    {
        printf("Its a prime number");

    }
    
    else
    {
        printf("Its not a prime number");

    }
    return 0;
}