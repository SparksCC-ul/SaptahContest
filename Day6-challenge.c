#include<stdio.h>
#include<string.h>

void stringconvert(char s[], int n){
    char c[500][500];
    int row=0, column=0, flag=1;
    int i, j;

    for(i=0; i<strlen(s); i++){
        c[row][column] = s[i];
        if(row == n-1){
            flag = 0;
        }
        if(row == 0){
            flag = 1;
        }
        if(flag){
            row++;
        } else {
            row--;
            column++;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<=column;j++){
            if(c[i][j]){
                printf("%c", c[i][j]);
            }

        }
    }
}

void main(){
    char s[1000];
    int n;

    printf("Enter s: ");
    scanf("%s", s);

    printf("Enter n: ");
    scanf("%d", &n);

    stringconvert(s, n);


}
