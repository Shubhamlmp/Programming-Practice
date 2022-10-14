#include <iostream>
using namespace std;
#include "node.cpp"

node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newNode = new node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
};

node *deletenode(node *head, int pos)
{
    node *temp = head;
    node *tail = NULL;

    int index = 0;

    while (index < pos - 1)
    {
        tail = temp;
        temp = temp -> next;
        index++;
    }
    
    temp = temp -> next;

    tail -> next = temp;

    return head;
}

void print(node *head)
{
    node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = takeinput();
    cout << "Linked List before deletion" << endl;
    print(head);
    int pos;
    cout << "Enter node position to delete" << endl;
    cin >> pos;
    head = deletenode(head, pos);
    cout << "Linked List after deletion" << endl;
    print(head);
    return 0;
}
