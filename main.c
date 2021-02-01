//Manish Athreya
//1BG19CS052
//ayerhtahsinam@gmail.com
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    char strin[100];
    char arr[20][20] = {0};
    int n,i = 0,j = 0,k = 0;
    bool down;
    printf("please Enter the String:>> ");
    scanf("%s",&strin);
    printf("please Enter the number of rows:>>");
    scanf("%d",&n);

        while (strin[i] != '\0')
    {
        if (k == n-1){
            down = false;
            j++;
        }   
        if (k == 0){
            down = true;
            j++;
        }
        if (down == true){
            arr[k][j] = strin[i];
            k+=1;
        }
        else{
            arr[k][j] = strin[i];
            k -=1;
        }
        i++;
    }

    for (i = 0;i<n;i++){
        for (j = 0;j<20;j++){
            printf("%c",arr[i][j]);
        }
    }
    
}