#!/usr/bin/env python3
"""
This is a love calculator program that determines how matchable the neams of people are
"""


user = input("What is your name? ")
they = input("What is their name? ")

l_user = user.lower()
l_they = they.lower()

t = l_user.count('t')
r = l_user.count('r')
u = l_user.count('u')
e = l_user.count('e')

l = l_they.count('l')
o = l_they.count('o')
v = l_they.count('v')
e = l_they.count('e')

true = int(t + r + u + e)
love = int(l + o + v + e)

lovematch = int(str(true) + str(love))

if lovematch < 10 or lovematch > 90:
    print("You're compatible like Coke and mentos")
elif lovematch < 25 or lovematch > 40:
    print("You are compatible. Tell them to rock and roll with you")
else:
    print("Continue loving each other.All the best")
