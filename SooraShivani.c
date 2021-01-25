#include <stdio.h>
#include <stdlib.h>

int main()
{
   int count, input[100],i,j;
   input[0] = 0;
   scanf("%d",&count);
   for(i=1;i<=(count*2);i++)
   {
       scanf("%d",&input[i]);
   }

   for(j=1;j<=(count*2);j=j+2)
   {
       printf("%d\n",(input[j]+input[j+1]));

   }
    return 0;
}
// Name: Soora Shivani     Email: soorashivani.s@gmail.com
  
