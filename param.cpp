#include<stdio.h>
int main(){
    int N,i,x,y,c;
    printf("Enter the number of test cases\n");
    scanf("%d",&N);
    int res[N];
    printf("Enter the numbers\n");
    for (i=0;i<N;i++){
        scanf("%d %d",&x,&y);
        res[i]=x+y;

    }
    printf("The results are\n");
      for (i=0;i<N;i++){
      printf("%d\n",res[i]);
        
    }
    return 0;
}