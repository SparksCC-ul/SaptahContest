import random

print('Lets play Lady,Hunter, Tiger!')
print('1.Lady')
print('2.Hunter')
print('3.Tiger')

symbols = ['Hunter', 'Lady', 'Tiger']
player1_choco = 0
player2_choco = 0
game_number = 0
for i in range(5):
    game_number += 1
    print(f'NOW GAME NUMBER {game_number}')
    player1_points = player2_points = 0
    

    while (player1_points != 3 or player2_points != 3):
        player1_choice = input("Player 1 choose an option from the menu :>>>").title()
        player2_list = random.choices(symbols)
        player2_choice = player2_list[0]
        print(f'player2 choice was {player2_choice}')
        while player1_choice not in symbols:
            print("Enter a valid choice from the menu")
        if ((player1_choice == 'Lady' and player2_choice == 'Tiger') or (player1_choice == 'Hunter' and player2_choice == 'Lady') or (player1_choice == 'Tiger' and player2_choice == 'Hunter')):
            player2_points += 1
            print(f'player1 = {player1_points}:player2 = {player2_points}')
        elif ((player2_choice == 'Lady' and player1_choice == 'Tiger') or (player2_choice == 'Hunter' and player1_choice == 'Lady') or (player2_choice == 'Tiger' and player1_choice == 'Hunter')):
            player1_points += 1
            print(f'player1 = {player1_points}:player2 = {player2_points}')
        elif (player1_choice == player2_choice):
            print("It was a draw!")
        if player1_points == 3:
            print('player 1 wins!!!')
            player1_choco += 1
            break
        elif player2_points == 3:
            print('player 2 wins!!!')
            player2_choco += 1
            break

if player1_choco > player2_choco:
    print('player 1 wins the game!!!')
    print(f'player 1 has {player1_choco} chocolates')
elif player2_choco > player1_choco:
    print("player 2 wins the game!!!")
    print(f'player 2 has {player2_choco} chocolates')
