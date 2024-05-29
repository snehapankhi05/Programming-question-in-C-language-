#include<stdio.h>
#include<conio.h>
int main()
{
    //ARMSTRONG--> A number that equals the sum of its digits,each raised to power
    //Find three digit number is armstrong or not
    int a,b,c,d,e;
    printf("Enter number ");
    scanf("%d",a);
    c=a/100;
    d=(a/10)%10;
    b=a%10;
    e=(d*d*d)+(c*c*c)+(b*b*b);
    if(e==a)
    {
        printf("Its armstrong");

    }
    else
    {
        printf("Its not a armstrong");

    }

    return 0;
}