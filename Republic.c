//NAME:R.CHINMAYEE
//EMAIL:chinmayeer10@gmail.com

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    char repeat;
   int P1=0, P2=0,ch1=0,ch2=0;
   int choice,i,j;
   cout<<"Lets play LADY,HUNTER,TIGER\n '1' HUNTER\n '2' LADY\n '3' TIGER\n";
  do{
   
   
   cout<<"Enter your choice(1,2,3)\n";
   cin>>choice;
   int comp = rand() % 3 + 1;
   cout <<  "The computer chose: " << comp<< endl;
   if(choice == 1 && comp == 1){
         cout << "same choice so draw" << endl;
         
         }
    else if(choice ==1 && comp== 2){
         cout << "player 2 wins gets 1 point" << endl;
         P2++;
          }
    else if(choice == 1 && comp == 3){
         cout << "Player 1 wins gets 1 point" << endl;
         P1++;
         }
    else if(choice == 2 && comp == 1){
         cout << "Player 1 wins  gets 1 point" << endl;
         P1++;
         }
    else if(choice == 2 && comp == 2){
         cout << "draw" << endl;
         
         }
    else if(choice == 2 && comp == 3){
         cout << "Player 2 wins  gets 1 point" << endl;
         P2++;
         }
    else if( choice == 3 && comp == 1){
         cout << "player 2 wins gets 1 point" << endl;
         P2++;
         }
    else if( choice == 3 && comp == 2){
         cout << "player 1 wins  gets 1 point" << endl;
         P1++;
         }
    else if(choice == 3 && comp == 3){
         cout <<"draw" << endl;
         
         }
    else{
         cout << "You didn't select 1, 2, or 3" << endl;
         }
         cout<<"Player1 points are : "<<P1<<"\n";
         cout<<"Player2 points are : "<<P2<<"\n";
         if(P1==3||P1==6||P1==9||P1==12||P1==15)
         { cout<<"Player 1 has won this Round! awarded chocolate\n";
         ch1++;
         
         }
         else if(P2==3||P2==6||P2==9||P2==12||P2==15)
         {  cout<<"Player 2 has won this Round! awarded chocolate\n";
         ch2++;
         
         }
         else
         cout<<"Continue\n";
    cout<<"No of chocolates Player 1 has are :"<<ch1<<"\n";
    cout<<"No of choloates Player 2 has are : "<<ch2<<"\n";
         
}while(P1!=3|| P2!=3);
       return 0;
   }
       
