#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,z,d;
float i;
printf("enter the value of a,b,c,d");
scanf("%d%d%d%d",&a,&b,&c,&d);
z=((a-b)*(a-b)+(c-d)*(c-d));
i=sqrt(z);
printf("i=%f",i);
}
