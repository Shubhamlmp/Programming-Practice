/* Given a linked list, an integer n and a position i, Insert that node n into Linked List at ith position recursively.
If position i is greater than length of LL, then you should return the same LL without any change. And if position i is equal to length of input LL, insert the node at last position.
Indexing starts from 0. You don't need to print the elements, just insert and return the head of updated LL.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer i (position)
Line 3 : Integer n (Node to be inserted)

Output format :
Updated LL elements (separated by space)

Sample Input 1 :
3 4 5 2 6 1 9 -1
3
100

Sample Output 1 :
3 4 5 100 2 6 1 9

Sample Input 2 :
3 4 5 2 6 1 9 -1
0
20

Sample Output 2 :
20 3 4 5 2 6 1 9 */
#include<bits/stdc++.h>
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

void insert_recursive(node *temp, int pos, int data){
    if (pos == 1)
    {
       node *newNode = new node(data);
       newNode -> next = temp -> next;
       temp -> next = newNode;
    }
    
    insert_recursive(temp -> next, pos - 1, data);
    
}

void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *head = takeinput();
    print(head);
    int pos;
    cin >> pos;
    int data;
    cin >> data;
    node *temp = head;
    insert_recursive(temp, pos, data);
    print(head);
    return 0;
}