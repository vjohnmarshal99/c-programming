#include<stdio.h>
int main()
{
float m1,m2,m3,total,avg;
char name[30];
printf("enter your name");
scanf("%s", name);
printf("my name is :%s\n",name);
printf("enter m1,m2,m3\n");
scanf("%f %f %f", &m1, &m2, &m3);
total=m1+m2+m3;
printf("total marks= %f\n",total);
avg=(m1+m2+m3)/3.0;
printf("average marks=%f\n", avg);
}
