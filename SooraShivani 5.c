#include <stdio.h>
#include <stdlib.h>
int main()
{
    char string[104];
    printf("s = ");
    scanf("%s", &string);
    int flag = 1;

    for(int i=0; string[i] != '\0'; i=i+2)  // checks if the string has open and close parenthesis next to each other
    {
        switch(string[i])
        {
            case '(': if(string[i+1]!= ')')
                      {
                          flag = 0;
                      }
                      break;
            case '[': if(string[i+1]!= ']')
                      {
                          flag = 0;
                      }
                      break;
            case '{': if(string[i+1]!= '}')
                      {
                          flag = 0;
                      }
                      break;
            default: printf("Incorrect input");
                     return 0;                         // program stops if the input string contains characters other than parenthesis
        }
        if(flag == 0)
            break;        //comes out of for loop if even one pair of parenthesis does not match
    }

    if(flag)
        printf("true");
    else
        printf("false");
    return 0;
}
// Name: Soora Shivani     Email: soorashivani.s@gmail.com
