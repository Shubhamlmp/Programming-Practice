#The Number Guessing Game using Python

#The computer will choose any random number between the user given range. Then the user will try to guess the right number.
#If the user failed to enter the random number chosen by the computer then the user will get a hint.
#The hints will be like these as you can see below:

#you are above the number
#you are below the number

#With the help of these hints, the user has to find the random number chosen by the computer.

#When the user will enter the right random number chosen by the computer he/she will get an output like this:
#You got it!
#You got it in n guesses

#n will be the number of turns the user used to guess the right random number chosen by the computer.

#I hope you have understood the rule.

#-----------------------------------------------------------------------------------------------------------------------------------------------------------

import random  #This will import the random module in our Python program to generate random value

username = input("Hello Buddy, What's your Good name? ") #feels user friendly

#greets the user 
print("Hello", username+",", ) 
 
#asks the user to enter the range 
top_of_range = input("okay Type a range,i will think between that number: ")

print("okay!!,I'm Thinking Of A Number")

#checks if the user entered only the digit
#if not then give a message to enter only digit next time
if top_of_range.isdigit():
    top_of_range = int(top_of_range)

#checks if the input is 0 or negative
    if top_of_range <= 0:
        print('Please type a number larger than 0 next time.')
        quit()
else:
    print('Opps!! you typed a letter,Please Enter a number next time.') 
    quit()

#create variable to store the generated random
#value between the user given range
random_number = random.randint(0, top_of_range)

#assign guesses as 0
guesses = 0

#loop while there is a input 
while True:
    guesses += 1 #counts the number of guesses taken by user 
    user_guess = input("Make a guess Now: ")
    
#checks if the user entered is a digit
#if not print a message to enter a number
    if user_guess.isdigit():            
        user_guess = int(user_guess)
    else:
        print('you typed a letter,Please Enter a number next time.')
        continue

#if the user guessed correct prints you are correct
#else if the guess is above the random number prints you are above number
#else if the guess is entered lower than random value prints you are below the number
    if user_guess == random_number:
        print("You got it!")
        break
    elif user_guess > random_number:
        print("You are above the number!")
    else:
        print("You are below the number!")

#gives the number of guesses user took
print("You got it in", guesses, "guesses")


#--------------------------------------------------------------------------------------------------------------------------------------------------------
#SAMPLE OUTPUT

#Hello Buddy, What's your Good name? j
#Hello j,
#okay Type a range,i will think between that number: 12
#okay!!,I'm Thinking Of A Number
#Make a guess Now: 11
#You were above the number!
#Make a guess Now: 5
#You were below the number!
#Make a guess Now: 6
#You were below the number!
#Make a guess Now: 7
#You got it!
#You got it in 4 guesses
