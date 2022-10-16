# Python program to Move All -ve Element At End
# Without changing order Of Array Element

# Moves all -ve element to end of array in
# same order.
def move(arr,n):
	j = 0
	ans=[None]*n
	i=0;j=n-1
	for k in range(n):
		if arr[k]>=0:
		ans[i]=arr[k]
		i+=1
		else:
		ans[j]=arr[k]
		j-=1
	ans[i:]=ans[n-1:i-1:-1]
	return ans

# Driver program
arr = [1 ,-1 ,-3 , -2, 7, 5, 11, 6 ]
n = len(arr)
print(move(arr, n))
