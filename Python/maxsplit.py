def BalancedPartition(str1, n):
	
	if (n == 0):
		return 0

	r = 0
	l = 0

	ans = 0

	for i in range(n):
		
		if (str1[i] == 'R'):
			r += 1

		elif (str1[i] == 'L'):
			l += 1

		if (r == l):
			ans += 1

	return ans

if __name__ == '__main__':
	
	str1 = input("Enter a string here : ")
	n = len(str1)

	print(BalancedPartition(str1, n))