#include<stdio.h>
void main()
{
int T, X, Y, Z;
printf("The number of test cases:");
scanf("%d",&T);
if (T>=0 && T<=100)
{
    printf("\nThe 2 integers to added are:");
    scanf("%d %d", &X,&Y);
    Z=X+Y;
    printf("%d\n", Z);
}
else 
printf("Invalid number of test cases\n");
}
