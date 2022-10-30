# Approach 1
inputString = input("Enter a string: ")
# Check if the string is a palindrome
if inputString == inputString[::-1]:
    print("The string is a palindrome")
else:
    print("The string is not a palindrome")


# Approach 2
# In approach 1, the string slice and reverse operation creates a copy. The following approach
# checks for the palindrome in-place in O(1)
word = input()
 def isPalindrome(i,j):
    while i < j:
        if word[i] != word[j]:
            return "NO"
        i += 1
        j -= 1
    return "YES"
print(isPalindrome(0, len(word) - 1))
 