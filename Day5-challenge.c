#include<stdio.h>
#include<string.h>

void main(){
    char s[104], c=97;
    int i;
    printf("Enter s: ");
    scanf("%s", s);


    int flag=0;
    for(i=1; i< (strlen(s) - 2); i+=2){
        if(s[i] == '(' && s[i+1] == ')'){
            flag=1;
        } else if(s[i] == '[' && s[i+1] == ']') {
            flag=1;
        } else if(s[i] == '{' && s[i+1] == '}') {
            flag=1;
        } else {
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("true");
    } else {
        printf("false");
    }
}
