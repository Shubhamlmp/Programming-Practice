                                                     // C++ program to determine whether given
                                                      // expression is balanced parenthesis
                                                        // expression or not.


#include <bits/stdc++.h>
using namespace std;

// Function to check if two brackets are matching
// or not.
int isMatching(char a, char b)
{
	if ((a == '{' && b == '}') || (a == '[' && b == ']')
		|| (a == '(' && b == ')') || a == 'X')
		return 1;
	return 0;
}

// Recursive function to check if given expression
// is balanced or not.
int isBalanced(string s, stack<char> ele, int ind)
{

	// Base case.
	// If the string is balanced then all the opening
	// brackets had been popped and stack should be
	// empty after string is traversed completely.
	if (ind == s.length())
		return ele.empty();

	// variable to store element at the top of the stack.
	char topEle;

	// variable to store result of recursive call.
	int res;

	// Case 1: When current element is an opening bracket
	// then push that element in the stack.
	if (s[ind] == '{' || s[ind] == '(' || s[ind] == '[') {
		ele.push(s[ind]);
		return isBalanced(s, ele, ind + 1);
	}

	// Case 2: When current element is a closing bracket
	// then check for matching bracket at the top of the
	// stack.
	else if (s[ind] == '}' || s[ind] == ')' || s[ind] == ']') {

		// If stack is empty then there is no matching opening
		// bracket for current closing bracket and the
		// expression is not balanced.
		if (ele.empty())
			return 0;

		topEle = ele.top();
		ele.pop();

		// Check bracket is matching or not.
		if (!isMatching(topEle, s[ind]))
			return 0;
		
		return isBalanced(s, ele, ind + 1);
	}

	// Case 3: If current element is 'X' then check
	// for both the cases when 'X' could be opening
	// or closing bracket.
	else if (s[ind] == 'X') {
		stack<char> tmp = ele;
		tmp.push(s[ind]);
		res = isBalanced(s, tmp, ind + 1);
		if (res)
			return 1;
		if (ele.empty())
			return 0;
		ele.pop();
		return isBalanced(s, ele, ind + 1);
	}
}

int main()
{
	string s = "{(X}[]";
	stack<char> ele;

	//Check if the String is of even length
	if(s.length()%2==0){
		if (isBalanced(s, ele, 0))
			cout << "Balanced";
		else
			cout << "Not Balanced";
	}

	// If the length of the string is not even
	// then it is not a balanced string
	else{
		cout << "Not Balanced";
	}
	return 0;
}
