#include<stdio.h>
void main()
{
int i,nt=0,t1=0,t2=1,n;
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d",nt);
nt=t1+t2;
t1=t2;
t2=nt;
}
}
