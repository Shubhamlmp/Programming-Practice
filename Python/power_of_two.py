n = int(input())
# power of two has only 1 bit and all 0s for other places. If we substract 1, the bits will
# negate the integer, so if the AND result is 0, the number is a power of two.
if (n & (n-1) == 0) and n != 0:
    print("YES")
else:
    print("NO")