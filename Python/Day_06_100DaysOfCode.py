#!/usr/bin/python3

"""
THis is a game that is used to find a treasure in a room.
It will if the condition is been passed and loose if not. Loss will lead to "Game Over"
"""

print("Welcome to Game \"Find the Tresure\". Let us start the game right away")
choice1 = input("You're on a way junction to choose between right or left. Type Right / left: ")

l_choice1 = choice1.lower()
if l_choice1 == 'l' or l_choice1 == 'left':
    choice2 = input("You went to a sea. Will you like to swim or wait for a boat(Swim/Wait)? ")
    l_choice2 = choice2.lower()

    if l_choice2 == 'wait' or l_choice2 == 'w':
        choice3 = input("The boat took you to a house. With which door do you wanna enter (Red/Yellow/Balck)? ")
        l_choice3 = choice3.lower()

        if l_choice3 == 'yellow' or l_choice3 == 'y':
            print("You entered the room of treasure. You won!!!")
        elif l_choice3 == 'red' or l_choice3 == 'r':
            print("You met fire in the room. Game over")
        else:
            print("The went to the room of demons, Game over")
    elif l_choice2 == 'swim' or l_choice2 == 's':
        print("You swam to a pool of crocodiles. Game over")
    else:
        print("The door does not exist. Game over")
        
elif l_choice1 == 'r' or l_choice1 == 'right':
        print("You meet some beast on the road. Game over")
else:
    print("You neither choose right nor left. Time up, Game over")
