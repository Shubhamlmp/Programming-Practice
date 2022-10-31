# PROBLEM STATEMENT:
# You will be given a number n. You need to generate all possible parentheses combinations of the n
# pairs of parentheses. And all these combinations should be well formed. 
# There shouldn't be a closing bracket before an opening bracket. And there should be as many closing 
# brackets as there are opening brackets.
# 
# EXAMPLE:
# Input:
# 3
# 
# Output:
# ((()))
# (()())
# (())()
# ()(())
# ()()()
# 
# Input:
# 1
# 
# Output:
# ()
# Constraints: 1 <= n <= 8 

def Parenthesis(str,pos,n,open,close):
  if(close == n):
    for i in str:
      print(i, end="")
    print()
    return
  else:
    if(open > close):
      str[pos] = '}'
      Parenthesis(str, pos + 1, n, open, close + 1)
    if(open < n):
      str[pos] = '{'
      Parenthesis(str, pos + 1, n, open + 1, close)
# Code to call the above function to print the pair of parentheses.
n = int(input())
str = [""] * 2 * n
Parenthesis(str, 0, n, 0, 0)
