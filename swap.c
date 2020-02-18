#include<stdio.h>
int main()
{
int a,b,t;
printf("enter value of a\n");
scanf("%d",&a);
printf("enter the value of b\n");
scanf("%d",&b);
printf("The given numbers before swapping a= %d and b=%d \n",a,b);
t=a;
a=b;
b=t;
printf("The swapped numbers are a= %d and b=%d\n",a,b);
}


