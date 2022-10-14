/*
Length of LL
Send Feedback
For a given singly linked list of integers, find and return its length. Do it using an iterative method.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains elements of the singly linked list separated by a single space.
 Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.
Output format :
For each test case, print the length of the linked list.

Output for every test case will be printed in a separate line.
 Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec
Sample Input 1 :
1
3 4 5 2 6 1 9 -1
Sample Output 1 :
7
Sample Input 2 :
2
10 76 39 -3 2 9 -23 9 -1
-1
Sample Output 2 :
8
0
*/

#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"
node *takeinput(){
    int data;
    cin >> data;

    node *tail = NULL;
    node *head = NULL;

    while (data != -1)
    {
        node *newNode = new node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin >> data;
    }
    return head;
}
int length(node *head)
{
    node *temp = head;
    int counter = 0;
    
    while (temp != NULL)
    {
        temp = temp -> next;
        counter++;
    }

    return counter;
    
}
int main()
{
    node *head = takeinput();
    cout << length(head) << endl;
    return 0;
}