#include<stdio.h>
#include<conio.h>
struct address
{
    char add[100];
    char area[50];
    char city[50];
    int pincode;

};
struct employe
{
    char name[50];
    int ID;
    struct address a; 

};
int main()
{
    struct employe e;
    printf("Please enter name:");
    gets(e.name);
    printf("Please enter your ID:");
    scanf("%d",&e.ID);
    printf("Please enter proper address i.e \nName of apartment/society than area than city than pincode\n");
    getchar();
    gets(e.a.add);
    gets(e.a.area);
    gets(e.a.city);
    scanf("%d",e.a.pincode);
    printf("\n\nName: %s \n ID: %d \nAddress: %s , %s, %s  , %d",e.name,e.ID,e.a.add,e.a.area,e.a.city,e.a.pincode);




    return 0;
}