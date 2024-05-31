#include<stdio.h>
#include<conio.h>
int main()
{
    //Fibonaci series -->a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers. The simplest is the series 1, 1, 2, 3, 5, 8, etc.
    int n,a=0,b=1,i,sum;
    printf("Please enter your number");
    scanf("%d",&n);
    printf("\t %d \t %d",a,b);
    for (i=1;i<=n-2;i++)
    {
        sum=a+b;
        printf("%4d",sum);
        a=b;
        b=sum;
    }


    return 0;
}