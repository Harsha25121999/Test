#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter the two number \n");
scanf("%d  %d",&a,&b);
temp = a;
a=b;
b=temp;
printf("Two numbers are %d %d ",a,b);
}
