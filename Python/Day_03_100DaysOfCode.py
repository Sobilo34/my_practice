#!/usr/bin/python3

"""
This is a program that calculate the BMI of a person.
The full meaning of BMI is Body Mass Index
It return the person's weight(kg) divided by square of his height(m)
Formula for BMI = height(m)\weight(kg) ** 2
The Program categorizes each individuals to Underwight, Normal weight,
Obesed and Clinically Obesed with their BMI 
"""

height = float(input("What is your height? ")) # Recieves the height
weight = int(input("What is your weight? ")) # Recieves the width

weight = weight * 1000
bmi = weight / (height ** 2) # Calculates the BMI

if bmi < 20:
    print(bmi);
    print("You're Underweight :)\n") # BMI below 20 is Underweight
elif bmi < 30:
    print(bmi);
    print("You have normal weight :)\n") # BMI < 30 but > 20 is Normal
elif bmi < 40:
    print(bmi);
    print("You are obesed ):\n") # BMI < 40 but > 30 is obesed
else:
    print(bmi);
    print("You're clinically obesed ):\n") # BMI more that 40 is Clinically obesed


