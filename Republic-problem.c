#include<stdio.h>

void main(){
    int player1, player2, result1=0, result2=0, i=0, p1=0, p2=0;
    while(i<5){
            printf("Lets play Lady,Hunter, Tiger!\n1.Lady\n2.Hunter\n3.Tiger");
            int j=0;
            while(j<3){
                printf("\nplayer1: ");
                scanf("%d", &player1);
                printf("player2: ");
                scanf("%d", &player2);

                if(player1==1 && player2==2){
                    printf("\nPlayer 1 beats Player 2\nPlayer 1 gets 1 Point");
                    p1 = p1+1;
                } else if(player1==1 && player2==3){
                    printf("\nPlayer 2 beats Player 1\nPlayer 2 gets 1 Point");
                    p2 = p2+1;
                }else if(player1==2 && player2==1){
                    printf("\nPlayer 2 beats Player 1\nPlayer 2 gets 1 Point");
                    p2 = p2+1;
                }else if(player1==2 && player2==3){
                    printf("\nPlayer 1 beats Player 2\nPlayer 1 gets 1 Point");
                    p1 = p1+1;
                }else if(player1==3 && player2==1){
                    printf("\nPlayer 1 beats Player 2\nPlayer 1 gets 1 Point");
                    p1 = p1+1;
                }else if(player1==3 && player2==2){
                    printf("\nPlayer 2 beats Player 1\nPlayer 2 gets 1 Point");
                    p2 = p2+1;
                }
                j++;
        }

        if(p2 > p1){
            printf("\nPlayer 2 has won Round %d! He is awarded a chocolate!\n", i+1);
            result2 = result2 + 1;
        } else {
            printf("\nPlayer 1 has won Round %d! He is awarded a chocolate!\n", i+1);
            result1 = result1 + 1;
        }
        p1=p2=0;
        i++;
    }
     printf("player1 has won %d choclates", result1);
     printf("\nplayer2 has won %d choclates", result2);
}
