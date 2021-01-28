//Manish Athreya
//1BG19CS052
//ayerhtahsinam@gmail.com
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
    int arr[50] = {0},N,k,i,j = 0,temp = 0;
    int maximum = 0,sum = 0;
    printf("Enter N:>>");
    scanf("%d",&N);
    printf("Enter the elements:>>");
    for (i = 0 ;i<N;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter k:>>");
    scanf("%d", &k);

    for (i = 0;i<(N/k)+k;i++){
        j = i;
        temp = 0;
        while (temp < k){
            sum = sum + arr[j];
            printf("%d\n",sum);
            j++;
            temp ++;
        }
        if (maximum < sum){
            maximum = sum;
        }
        printf("\n%d\n",i);
        sum = 0;
    }

    printf("Maximum contiguous sum is %d", maximum);
}