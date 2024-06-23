#include<stdio.h>
#include<conio.h>
struct student
{
    
    char name[30];
    int ID;
    float marks;
};
void func(struct student record);
void main()
{
    struct student record;
    printf("Please enter students details:\n");
    
    printf("Enter name of student");
    gets(record.name);
    printf("enter id:");
    scanf("%d",&record.ID);
    printf("Enter marks");
    scanf("%f",&record.marks);
    func(record);
    return 0;
}
void func(struct student record)
{
    printf("\nName: %s \nID: %d \nResult: %f",record.name,record.ID,record.marks);
}