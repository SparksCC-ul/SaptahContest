#include<stdio.h>

void main(){
    int arr[100], n, sum=0, k;
    int i;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter k: ");
    scanf("%d", &k);

    int max[100], count=0;
    int j = 0;
    for(i=0; i<(n/k)+k; i++){
        j=i;
        int c =0;
        while(c<k){
            sum = sum + arr[j];
            j++;
            c++;
        }
        max[i] = sum;
        count++;
        //printf("%d\n", sum);
        sum=0;

    }


    int maximum = max[0];
    for(i=0; i<count;i++){
       if(max[i] > maximum){
            maximum = max[i];
        }
    }

    printf("%d", maximum);
}
