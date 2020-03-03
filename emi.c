#include<stdio.h>
#include<math.h>
void main()
{
int p,t;
float emi,r,x,z,y;
printf("enter the values of p,r,t\n");
scanf("%d%d%f",&p,&t,&r);
x=t*12;
y=r/(100*12);
z=pow((1+y),x);
emi=(p*y*z)/(z-1);
printf("x=%f",x);
printf("y=%f",y);
printf("z=%f",z);
printf("emi=%f",emi);
}
