//vidhi sinha-vidhisinha2002@gmail.comp
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int N,x1,y1,x2,y2,r,c,i,j,temp;  //variables
    scanf("%d", &N);    //take N
    char arr[N][N];
    scanf("%d%d", &x1, &y1);    //take cordinates
    scanf("%d%d", &x2, &y2);
    for(i=0;i<N;i++)        //initially make everyting 0
    {
        for(j=0; j<N;j++)  
        {
            arr[i][j] = '0';
        }
    }   // make end and start X
    arr[x1][y1] = 'X';
    arr[x2][y2] = 'X';      
       if(x1 < x2)      // initializing the value of starting row
            r = x1+1;   //working with rows
       else
            r = x1-1;
    for( ; r<(N-1) && r != 0; )
    {
        arr[r][y1] = 'X';     
        if( r== x2)
            break;
        if(x2 > r)
        {
            r++;
            temp = 1;
        }
        else
        {
            r--;
            temp = 0;
        }
    }
    if(x2 == 0 || x2 == N-1)
    {
      if(temp)
        r--;
      else
        r++;
    }
    for(c=y1; c<N; )    //working with col
    {
        arr[r][c] = 'X';  
        if(c == y2)
        {
            break;
        }
        if(y2 > c)
            c++;
        else
            c--;
    }
    for(i=0; i<N;i++)//result
    {
        for(j=0; j<N; j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
