#include<stdio.h>
void main()
{
int a[10][10],i,j,count=0,sum=0,col;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(j=0;j<n;j++){

for(i=0;i=0;i<n;i++){
if(a[i][j]==0)
count++;
if(count>sum)
col=j;
}
}
printf("%d",col);
