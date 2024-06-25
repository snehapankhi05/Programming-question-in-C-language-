#include<stdio.h>
#include<conio.h>
union uni
{
    int i;
    char c;
    float f;
}u;
int main()
{
    u.i=5;
    printf("Member i=%d \n",u.i);
    u.c='a';
    printf("Member c =%c \n",u.c);
    u.f=4.5;
    printf("Member f =%f \n",u.f);
    return 0;
}