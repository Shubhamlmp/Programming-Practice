input_numbers = input().split(" ")
a,b = int(input_numbers[0]), int(input_numbers[1]) 
def getSum(a: int, b: int) -> int:
    mask = 0xffffffff
    while b&mask:
        a, b = a^b, (a&b)<<1
        
    max_int = 2**(32-1) - 1
    if b < max_int:
        return a
    else:
        # if there is overflow
		# i.e if a is a negative value.
        return a& mask
print(getSum(a,b))