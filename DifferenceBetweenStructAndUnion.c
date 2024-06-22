#include<stdio.h>
#include<conio.h>
union uni
{
    int i;
    char c;
    float f;
}u;
struct struc
{
    int i;
    char c;
    float f;
}s;
int main()
{
    int k;
    k=sizeof(u);
    printf("Thde size of union is:%d",k);
    k=sizeof(s);
    printf("Thde size of structure is:%d",k);
    return 0;
}
