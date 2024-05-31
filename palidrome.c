#include<stdio.h>
#include<conio.h>
int main()
{
    //PALIDROME--> A word ,sentence,verse,or even a number that reads the same backward or forward.
    int x,digit,reverse=0,number;
    printf("Please enter your number");
    scanf("%d",&number);
    x=number;
    while(number!=0)
    {
        digit=number%10;
        reverse=(reverse*10)+digit;
        number=number/10;

    }
    if(reverse==x)
    {
        printf("it is palidrome");

    }
    else
    {
        printf("it is not a palidrome");

    }
    
}