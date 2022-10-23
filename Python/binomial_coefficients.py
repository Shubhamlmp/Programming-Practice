def fact(n):
    if n in [0, 1]:
        return 1
    else:
        return n * fact(n-1)     

def get_binomial_coefficient(n, r):
    numerator   = fact(n)
    denominator = fact(r) * fact(n-r)
    return numerator // denominator

n = int(input("Enter n: "))
r = int(input("Enter r: "))

ans = get_binomial_coefficient(n, r)

print(ans)
