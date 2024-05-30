#include<stdio.h>
#include<conio.h>
int main()
{
    //menu driven calculator using switch statement
    float a,b;
    char c;
    printf("Please enter two number =");
    scanf("%f %f",&a,&b);
    getchar();
    printf("\n PLEASE SELECT YOUR OPTION GIVEN BELOW: ");
    printf("\n For addition = + \n For subtraction = - \n For multipication = * \n For division = / \n");
    scanf("%c",&c);
    switch(c)
    {
        case '+':
        {
            printf("Addition of two number is: %f",a+b);
            break;

        }
        case '-':
        {
            printf("Subtraction of two number is: %f",a-b);
            break;
            
        }
        case '*':
        {
            printf("Multiplication of two number is: %f",a*b);
            break;
        
        }
        case '/':
        {
            printf("Division of two number is: %f",a/b);
            break;
            
        }
        default:
        {
            printf("Please select valid option");
        }
    }
    return 0;
}