#include<stdio.h>
#include<conio.h>
struct personal
{
    char name[20],address[100];
    int day;
    int month;
    int year;
    float salary;
    
};

int main()

{
    struct personal person;
    printf("Enter your details:Name ");
    scanf("%s",&person.name);
    
    printf("Enter your details:Address ");
    scanf("%s",&person.address);
    
    printf("Enter your details:day of birth ");
    scanf("%d",&person.day);
    
    printf("Enter your details:month of birth in number ");
    scanf("%d",&person.month);
    
    printf("Enter your details:year of birth ");
    scanf("%d",&person.year);

    
    printf("Enter your details:Salary ");
    scanf("%f",&person.salary);
    //scanf("%s %s %d %d %d %f",&person.name,&person.address,&person.day,&person.month,&person.year,&person.salary);
    printf(" Name:%s \n Address:%s \n Date of Birth:%d/%d/%d \n Salary:",person.name,person.address,person.day,person.month,person.year,person.salary);
    return 0;
}