# vidhi sinha --------- vidhisinha2002@gmail.com

import random
print('Lets play Lady,Hunter, Tiger!')
print('1.Hunter')
print('2.Lady')
print('3.Tiger')

# 1 is for hunter, 2 is for lady, 3 is for tiger
symbols = ['1', '2', '3']

# initialize chocolate values and round number
p1_chocolate = 0
p2_chocolate = 0
round_no = 0

# for round 1
for i in range(5):
    round_no = round_no + 1
    print(f'======================= ROUND {round_no} =========================')
    p1_point = p2_point = 0

    # if chocolate is not equal to 3
    while (p1_point != 3 or p2_point != 3):
        # choice of player 1
        p1_choice = input("Player 1:").title()
        # random choices taken by "random"
        p2_list = random.choices(symbols)
        p2_choice = p2_list[0]
        print(f'Player 2:{p2_choice}')
        while p1_choice not in symbols:
            print("========INVALID========")
        # winning and loosing situations and then calculating points
        if ((p1_choice == '2' and p2_choice == '3') or (p1_choice == '1' and p2_choice == '2') or (p1_choice == '3' and p2_choice == '1')):
            print("Player 2 beats Player 1 ")
            print("Player 2 gets 1 Point")
            p2_point = p2_point + 1
        elif ((p2_choice == '2' and p1_choice == '3') or (p2_choice == '1' and p1_choice == '2') or (p2_choice == '3' and p1_choice == '1')):
            print("Player 1 beats Player 2 ")
            print("Player 1 gets 1 Point")
            p1_point = p1_point + 1
        # draw situation
        elif (p1_choice == p2_choice):
            print("======DRAW=======")
        # reaching 3 points to get a chocolate
        if p1_point == 3:
            print(f'Player 1 has won Round {round_no}! He is awarded a chocolate!')
            p1_chocolate = p1_chocolate + 1
            break
        elif p2_point == 3:
            print(f'Player 2 has won Round {round_no}! He is awarded a chocolate!')
            p2_chocolate = p2_chocolate + 1
            break
# display no of chocolates
if p1_chocolate > p2_chocolate:
    print(f'player 1 has {p1_chocolate} chocolates')
elif p2_chocolate > p1_chocolate:
    print(f'player 2 has {p2_chocolate} chocolates')
