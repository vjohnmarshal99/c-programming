#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,sum,per;
printf("enter s1,s2,s3,s4,s5");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
sum=s1+s2+s3+s4+s5;
per=sum*100/500;
if(per>=90)
{
printf("grade=s\n");
}
else if(per>80 &&per<=89)
{
printf("grade=a\n");
}
else if(per>70 &&per<=79)
{
printf("grade=b\n");
}
else if(per>60 &&per<=69)
{
printf("grade=c\n");
}
else
{
printf("grade=fail");
}
}
