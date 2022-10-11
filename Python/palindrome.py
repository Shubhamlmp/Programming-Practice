inputString = input("Enter a string: ")
# Check if the string is a palindrome
if inputString == inputString[::-1]:
    print("The string is a palindrome")
else:
    print("The string is not a palindrome")