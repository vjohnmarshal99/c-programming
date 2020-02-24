#include<stdio.h>
void main()
{
int s1,s2,s3;
printf(" enter the sides of triangle");
scanf("%d%d%d" ,&s1,&s2,&s3);
if (s1==s2 && s2==s3)
{
printf("it is equilateral triangle");
}
else if (s1!=s2 && s2!=s3 && s3!=s1)
{
printf("the triangle is scalene");
}
else 
{
printf("the triangle is isosceles");
}
}
