print("/////////////////////Factorial Program////////////////////////")

# Taking the input
n=int(input("Enter the number: "))
# Initializing the variable
factorial =1
# recursive function to calculate the factorial
for i in range(1,n): 
    factorial=factorial*i

print("The factorial is: ",factorial)