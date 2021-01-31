#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
void convert(char s[], int numRows)
{
    char ans[500][500];  //2d character array to store the pattern
    int down = 1;    // to keep track of the direction in the zigzag pattern
    int row = 0,column = 0;
    for(int i=0; s[i]!='\0';i++ )
    {
        ans[row][column] = s[i];
        if(row == numRows -1)
        {
            down = 0;
        }
        if(row == 0)
        {
           down = 1;
        }
        if(down)
        {
           row++;
        }
        else
        {
            row--,column++;
        }
    }
    
    for(int r = 0; r < numRows; r++)
    {
       for(int c=0; c<= column; c++)    //for printing the pattern row wise
       {
          if( isalpha(ans[r][c]) || ans[r][c] == '.' || ans[r][c] == ',')
          {
              printf("%c", ans[r][c]);     // for ignoring the spaces and printing only the alphabets,',' and '.'.
          }

       }
       
    }
}
int main()
{
    char string[1000],ans[1000];
    int n;
    printf("Enter the string and the number of rows: ");
    scanf("%s %d", &string, &n);
    convert(string,n);

    return 0;
}
// Name: Soora Shivani   Email: soorashivani.s@gmail.com
