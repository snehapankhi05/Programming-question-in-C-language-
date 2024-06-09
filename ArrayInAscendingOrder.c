#include<stdio.h>
#include<conio.h>
void main()
{
int a[1000],i,temp,j,n;
printf("enter size of an array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter element: ");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
}
printf("\n sorted array is: \n");
for(i=0;i<n;i++)
{
printf("\t %d",a[i]);
}
}
