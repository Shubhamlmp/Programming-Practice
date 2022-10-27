import random
n=5
i=0
l=0
w=0
while i<n:
    print("Snake-Water-Gun")
    a=['Snake','Water','Gun']
    r=random.choice(a)
    print("Enter your choice- Snake,Water or Gun")
    e=input()
    if e=='Snake': 
        if r=='Water':
            print("Your opponent's choice is %s"%r)
            print("You got the point\n")
            w=w+1
            i=i+1
        elif r=='Gun':
            print("Your opponent's choice is %s"%r)
            print("You Lose the point\n")
            l=l+1
            i=i+1
        elif r=='Snake' :
            print("Your opponent's choice is %s"%r)
            print("Tie..\n")
            i=i+1
        else:
            print("Invalid Input")
    
        
    elif e=='Water': 
        if r=='Gun':
            print("Your opponent's choice is %s"%r)
            print("You got the point\n")
            w=w+1
            i=i+1
        elif r=='Snake':
            print("Your opponent's choice is %s"%r)
            print("You Lose the point\n")
            l=l+1
            i=i+1
        elif r=='Water':
            print("Your opponent's choice is %s"%r)
            print("Tie..\n")
            i=i+1
        else:
            print("Invalid Input")
        
    elif e=='Gun': 
        if r=='Snake':
            print("Your opponent's choice is %s"%r)
            print("You got the point\n")
            w=w+1
            i+1
        elif r=='Water':
            print("Your opponent's choice is %s"%r)
            print("You Lose the point\n")
            l=l+1
            i=i+1
        elif r=='Gun':
            print("Your opponent's choice is %s"%r)
            print("Tie..\n")
            i=i+1
        else:
            print("Invalid Input")
    
       
    else:
        print("Invalid Input")
    print("{} no. of chances left".format(n-i))

if w>l:
    print("Congrats You Won The Game!")
elif w<l:
    print("You lose the Game")

else:
    print("It was a Tie")
