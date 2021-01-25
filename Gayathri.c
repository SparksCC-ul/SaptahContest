#include<stdio.h>
void main()
{
int t,a,b,sum=0,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %d",&a,&b);
sum=a+b;
printf("%d/n",sum);
sum=0;
}
}
