#include<stdio.h>
#include<conio.h>
int main()
{
    int i,v=0,c=0;
    char a[30];
    printf("Please enter String:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='E')
        {
            v++;
            
        }
        else
        {
            c++;
        }
    }
    printf("Vowels are = %d \n consonants are = %d",v,c);
    return 0;
}