#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char stack[104];
int top = -1;

void push(char item)
{
   top = top +1;
   stack[top] = item;      // used for pushing elements into the stack
}
void pop()
{
    stack[top] = '\0';
    top = top - 1;         // for popping elements in the stack
}

int main()
{
    char string[104];
    printf("s = ");
    scanf("%s",&string);

    if( strlen(string) < 2)
    {
        printf("false");  // execution stops if input string is empty or has only one character
        return 0;
    }

    for(int i=0; string[i]!='\0'; i++)
    {
        if(string[i] == '(' || string[i] == '[' || string[i] == '{' )
        {
            push(string[i]);    //opening brackets are pushed into the stack
        }

        switch(string[i])
        {
            case ')': if(stack[top] != '(')
                         {
                             printf("false");
                             return 0;        // execution stops if brackets are not found in the correct order
                         }
                      else
                      {
                          pop();   // if brackets found in correct order then it pops the corresponding opening bracket from stack
                      }
                         break;

             case ']': if(stack[top] != '[')
                         {
                             printf("false");
                             return 0;
                         }
                      else
                      {
                          pop();
                      }
                         break;

             case '}': if(stack[top] != '{')
                         {
                             printf("false");
                             return 0;
                         }
                      else
                      {
                          pop();
                      }
                         break;
             case '(':
             case '{':
             case '[': break;
             default: printf("Incorrect Input");
                      return 0;
                      break;      // execution stops if the input string has characters other than parenthesis

             }

    }
     if(stack[top] != '\0')
    {
        printf("false");
        return 0;       // if the stack still contains some opening bracket then its closing bracket
    }                   // is missing in the string and the string is invalid.

    printf("true");
    return 0;
}
// Name: Soora Shivani    Email: soorashivani.s@gmail.com
