import sys
n = sys.stdin.readline()
numbers = [float(s) for s in sys.stdin.readline().split(" ")]

def calc_average(numbers):
    return sum(numbers) / len(numbers)
    
print(calc_average(numbers))