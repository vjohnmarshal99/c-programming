#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float s,z, area;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
z=(s*(s-a)*(s-b)*(s-c));
area=sqrt(z);
printf("s=%f",s);
printf("z=%f",z);
printf("area=%f",area);
}
