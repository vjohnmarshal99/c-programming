#include<stdio.h>
int main()
{
float b,h,area,c,a;
printf("enter the value of b,a,h\n");
scanf("%f%f%f",&a,&b,&h);
area=0.5*b*h;
c=a+b+h;
printf("area of the triangle=%f",area);
printf("perimeter of the triangle=%f",c);
}
