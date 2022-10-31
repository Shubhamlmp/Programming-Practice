# Function to check the Vowel
def isVowel(ch):
	return ch.upper() in ['A', 'E', 'I', 'O', 'U']

# Function to count total number of vowels
def countVovels(str, n):
	if (n == 1):
		return isVowel(str[n - 1]);

	return (countVovels(str, n - 1) +
				isVowel(str[n - 1]));


str = input("Enter your string here :")

print(countVovels(str, len(str)))