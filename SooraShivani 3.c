#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m[20][20],column = 0,max = 0;
    printf("N = ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
       for(int j = 0; j<n; j++)
       {
           scanf("%d",&m[i][j]);
       }
    }
    for(int j = 0; j<n; j++)
    {
        int zero_count = 0;
        for(int i = 0; i<n; i++)
        {
            if(m[i][j]==0)
            {
                zero_count++;
            }
        }
        if(zero_count > max)
        {
            max = zero_count;
            column = j;
        }
    }
    printf("%d\n",column);
    return 0;
}
// Name: Soora Shivani     Email: soorashivani.s@gmail.com
