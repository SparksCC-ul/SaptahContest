#include <stdio.h>
#include <stdlib.h>
// Day 2: Republic day
int main()
{
    int player1, player2;
    int p1count = 0, p2count = 0;
    printf("Lets play Lady,Hunter,Tiger!\n");
    printf("1.Hunter \n2.Lady \n3.Tiger \n");
    for(int round = 1; round <= 5; round++)
    {
        int p1= 0, p2 = 0;
        for( int chance = 1; chance <= 3; chance++)
        {
            printf("Player1: ");
            scanf("%d",&player1);
            player2 = (rand() % 3)+1 ;
            printf("Player2: %d\n",player2);
            //scanf("%d",&player2);

            switch(player1)
            {
                case 1: if(player2 == 1)
                        printf("It's draw\n");
                        else if(player2 == 2)
                        {
                           printf("Player 2 beats Player 1\n");
                           printf("Player 2 gets 1 Point\n");
                           p2 = p2 + 1;
                        }
                        else if(player2 == 3)
                        {
                           printf("Player 1 beats Player 2\n");
                           printf("Player 1 gets 1 Point\n");
                           p1 = p1 + 1;

                        }
                        break;
                case 2: if(player2 == 1)
                        {
                           printf("Player 1 beats Player 2\n");
                           printf("Player 1 gets 1 Point\n");
                           p1 = p1 + 1;
                        }
                        else if(player2 == 2)
                        printf("It's draw\n");
                        else if(player2 == 3)
                        {
                           printf("Player 2 beats Player 1\n");
                           printf("Player 2 gets 1 Point\n");
                           p2 = p2 + 1;

                        }
                        break;
                case 3: if(player2 == 1)
                        {
                          printf("Player 2 beats Player 1\n");
                           printf("Player 2 gets 1 Point\n");
                           p2 = p2 + 1;
                        }
                        else if(player2 == 2)
                        {
                          printf("Player 1 beats Player 2\n");
                           printf("Player 1 gets 1 Point\n");
                           p1 = p1 + 1;
                        }
                        else if(player2 == 3)
                        printf("It's draw\n");
                        break;
                default: printf("Wrong choice\n");
                         chance--;


            }

        }
        if(p1 > p2)
            {
                //printf("player 1 gets 1 point\n");
                printf("Player 1 has won Round %d! He is awarded a chocolate!\n",round);
                p1count = p1count + 1;

            }
            else if (p2 > p1)
            {
               //printf("player 2 gets 1 point\n");
                printf("Player 2 has won Round %d! He is awarded a chocolate!\n",round);
                p2count = p2count + 1;

            }
            else{
                printf("No one gets a chocolate\n");
            }

    }
    printf("The number of chocolates each player has is: \n");
    printf("Player 1 = %d\n Player 2 = %d\n", p1count, p2count);
}
// Name: Soora Shivani   Email: soorashivani.s@gmail.com
