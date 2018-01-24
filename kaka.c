#include<stdio.h>
int main()
{
int a=1,i,num;
printf("Enter any number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
a=a*i;
}
printf("Factorial of a number is %d",a);
return 0;
}
