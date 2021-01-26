#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<time.h>
int ch1;
void main()
{
int lower = 1, upper = 3;
int ch,play1 ,play2,i;

printf("Lets play Lady,Hunter,Tiger\n1.Hunter\n2.Lady\n3.Tiger\n");
 for(i=1;i<=5;i++)
{
    play1 = 0;play2 = 0;
while(play1<=3||play2<=3)
{
    srand(time(NULL));
ch1 = (rand()%(upper-lower+1))+lower;
    printf("Player 1:");
    scanf("%d",&ch);
    printf("Player 2:");
printf("%d\n",ch1);
if(ch==1&&ch1==2)
{
    printf("PLayer 2 beats player 1\nPlayer 2 gets 1 point\n");
    play2++;
}
if(ch==1&&ch1==3)
{
  printf("PLayer 1 beats player 2\nPlayer 1 gets 1 point\n");
  play1++;
}
if(ch==1&&ch1==1)
{
    printf("No one gets a point\n");
}
if(ch==2&&ch1==1)
{
    printf("PLayer 1 beats player 2\nPlayer 1 gets 1 point\n");
    play1++;
}
if(ch==2&&ch1==3)
{
  printf("PLayer 2 beats player 1\nPlayer 2 gets 1 point\n");
  play2++;
}
if(ch==2&&ch1==2)
{
    printf("No one gets a point\n");
}
if(ch==3&&ch1==1)
{
    printf("PLayer 2 beats player 1\nPlayer 2 gets 1 point\n");
    play2++;
}
if(ch==3&&ch1==2)
{
  printf("PLayer 1 beats player 2\nPlayer 1 gets 1 point\n");
  play1++;
}
if(ch==3&&ch1==3)
{
    printf("No one gets a point\n");
}
if(play1 == 3)
{
   printf("Player 1 has won Round %d! He is awarded a chocolate!\n",i);
   break;
}
if(play2==3)
{
    printf("Player 2 has won Round %d! He is awarded a chocolate!\n",i);
    break;
}
}
}
}
