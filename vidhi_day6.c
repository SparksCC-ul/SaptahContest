//vidhisinha2002@gmail.com---vidhi sinha
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{   void solution();
    char str[1000],st[1000];int n;  //variables
    scanf("%s", str);  //enter string s
    scanf("%d", &n);    //enter no of rows n
    solution(str,n);    // function call
    return 0;
}
void solution(char s[],int numrows)
{
    char st[1000][1000]; int row = 0,col = 0,dir = 1,R,C;  //variables
    for(int i=0 ; s[i]!='\0' ; i++ )     //direction of movement
    { 
        st[row][col] = s[i];
        if(row == 0)           {dir = 1;}  // if in 1st row 
        if(row == numrows -1)  {dir = 0;}   //if in last row
        if(dir)                {row++;}     //letter is printed in next doen row
        else                   {row--,col++;}   //letter is placed diagonally in upward direction by dec row and inc col
    }
    for(R = 0 ; R <= numrows ; R++)    //2 loops for a 2d matrix
    {
       for(C=0 ; C<= col ; C++)    //prints final pattern
       {
          if(st[R][C] == ','||st[R][C] =='.'||isalpha(st[R][C])) //fn isalpha checks if the passed character is an alphabet or not
              printf("%c", st[R][C]);     //s consists of English letters (lower-case and upper-case), ',' and '.'.
       }
    }
}
