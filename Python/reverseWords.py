# taking input as a string
input_str = input()

# splitting the string into words - default is by space character but we can specify the split point
words = input_str.split()

# looping through the words
for word in words:
    # reversing each word to prevent the sentence from being reversed
    print(word[::-1], end=" ")