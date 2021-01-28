// vidhi sinha----vidhisinha2002@gmail.com
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    char temp;
    int j=0,inc,k,arr[500],r=0;
    //taking array inputs--give space btw the elements--press enter to end array
    while(1)
    {
        scanf("%d%c", &arr[j++], &temp);
        inc++;
    if (temp == '\n')
        break;
    }
    //length of the subarray
    scanf("%d",&k);
    // computing sum s
    int max = 0, s = 0;
    for(int i =0; i<k;i++)
    {
       s+= arr[i];
    }
    max = s;
    for(int i=k;i<inc;i++)
    {
        s = s + arr[i] - arr[r];
        if(s>max)
        max = s;
        r++;
    }
    printf("%d",max);
    return 0;
}
