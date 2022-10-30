

def isPalindrome(arr):
    j= len(arr)-1
    i=0
    while(i<j):
        if(arr[i]!=arr[j]):
            return False
        i+=1
        j-=1
    return True
print(isPalindrome([1,2,3,2,1]))