#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,startx, starty, endx, endy,a,b;
    printf("N = ");
    scanf("%d", &N);
    char array[N][N];
    printf("Enter the start and end coordinates.\n");
    scanf("%d%d", &startx, &starty);
    scanf("%d%d", &endx, &endy);
    //printf("%d %d", startx, endy);

    for( int i=0; i<N;i++)
    {
        for(int j=0; j<N; j++)  // used for initializing all the array cells to 0
        {
            array[i][j] = '0';
        }
    }
    array[startx][starty] = 'X';
    array[endx][endy] = 'X';      // sets start and end cell to 'X'
    int flag;


       if(startx < endx)      // initializing the value of starting row
        a = startx+1;
       else
        a = startx-1;


    for( ; a<(N-1) && a != 0; )
    {
        array[a][starty] = 'X';     // used for coming into the same row as the destination
        if( a == endx)
            break;
        if(endx > a)
        {
            a++; flag = 1;
        }
        else
        {
            a--; flag = 0;
        }
    }
    if(endx == 0 || endx == N-1)
    {
      if(flag)
      a--;
      else
      a++;
    }

    for( b=starty; b<N; )
    {
        array[a][b] = 'X';  // used for coming into the same column as destination
        if(b == endy)
        {
            break;
        }
        if(endy > b)
            b++;
        else
            b--;
    }
    printf("Solution:\n");
    for( int i=0; i<N;i++)  // used for printing the solution
    {
        for(int j=0; j<N; j++)
        {
            printf("%c ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Name: Soora Shivani    Email: soorashivani.s@gmail.com
