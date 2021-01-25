#include<stdio.h>

void main(){
    int inp[100], n, sum;
    scanf("%d", &n);
    int i =0;
    while(i<n){
        scanf("%d %d", &inp[i+i], &inp[i+i+1]);
        i++;
    }
    int j=0;
    while(j<n){
        sum = inp[j+j] + inp[j+j+1];
        printf("\n%d", sum);
        j++;
    }

}

/* Mohammed Raheel */
