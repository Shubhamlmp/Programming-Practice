# Print Pascal's Triangle in Python
from math import factorial

n = 5
for i in range(n):
	for j in range(n-i+1):
		print(end=" ")

	for j in range(i+1):

		# nCr = n!/((n-r)!*r!)
		print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")

	print()
