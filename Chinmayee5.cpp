//NAME:R.CHINMAYEE
//EMAIL:chinmayeer10@gmail.com


#include <iostream>
using namespace std;
int main()
{
    char a[100];
    int i,flag=1;
    cout<<"s = ";
    cin>>a;
   for(i=0; a[i] != '\0'; i=i+2)  
    {
        switch(a[i])
        {
            case '(': if(a[i+1]!= ')')
                      {
                          flag = 0;
                      }
                      break;
            case '[': if(a[i+1]!= ']')
                      {
                          flag = 0;
                      }
                      break;
            case '{': if(a[i+1]!= '}')
                      {
                          flag = 0;
                      }
                      break;
            default: cout<<"Incorrect input";
                     return 0;                    
        }
        if(flag == 0)
            break;       
    }

    if(flag)
        cout<<"True\n";
    else
        cout<<"False\n";
    
    return 0;
}
