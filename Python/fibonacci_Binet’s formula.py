# Python3 program to find n'th
# fibonacci Number
import math

def fibo(n):
	phi = (1 + math.sqrt(5)) / 2

	return round(pow(phi, n) / math.sqrt(5))
	
# Driver code
if __name__ == '__main__':
	
	n = 9
	
	print(fibo(n))
	
# This code is contributed by hritik maheshwari
