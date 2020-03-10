#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a");
else if(b>a && b>c)
printf("b");
else
printf("c");
}
