#include<stdio.h>

void main(){
    int arr[100][100], n, i=0, j=0, c=0;
    int n1, n2, n3;

    printf("Enter n: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int res[100];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j][i] == 0){
                c+=1;
            }
        }
        res[i] = c;
        c=0;
    }

    int max = res[0];
    int max_index = 0;
    for(int k=1; k<n; k++){
        if(res[k] > max){
            max_index = k;
        }
    }

    printf("%d", max_index);
}
