//vidhi sinha---- vidhisinha2002@gmail.com
#include <bits/stdc++.h> 
using namespace std; 
bool parBalanced(string expr)       // function to check balanced parentheses
{   stack<char> st; 
    char x; 
    for (int i = 0; i < expr.length(); i++)     // traverse the given expression 
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')  
        { 
            st.push(expr[i]);        // push the element on stack
            continue; 
        } 
        if (st.empty())         // stack cannot be empty at this point. 
            return false; 
  
        switch (expr[i]) { 
        case ')': x = st.top(); 
                  st.pop(); 
                  if (x == '{' || x == '[') 
                     return false; 
                  break; 
        case '}': x = st.top(); 
                  st.pop(); 
                  if (x == '(' || x == '[') 
                      return false; 
                  break; 
        case ']': x = st.top(); 
                  st.pop(); 
                  if (x == '(' || x == '{') 
                      return false; 
                  break;
        } 
    } 
    return (st.empty()); 
} 
int main() 
{ 
    string expr;
    cout << "s = ";
    cin >> expr;
    if (parBalanced(expr))      // calling funtion
        cout << "true"; 
    else
        cout << "false"; 
    return 0; 
} 
