#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100],N,k;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    for(int i=0; i<N; i++ )
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the length of the subarray: ");
    scanf("%d",&k);
    int max =0, sum=0;
    for(int i =0; i<k;i++)
    {
       sum = sum + array[i];
    }
    max = sum;
    int j =0;
    for(int i=k;i<N;i++)
    {
        sum = sum - array[j] + array[i];
        if(sum>max)
            max = sum;
        j++;
    }
    printf("Maximum sum = %d",max);
    return 0;
}
//Name: Soora Shivani     Email: soorashivani.s@gmail.com
