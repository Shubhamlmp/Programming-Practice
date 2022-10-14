#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *deleteduplicates(node *head)
{
    node *temp = head;
    node *nextnode = head->next;

    while (temp->next != NULL)
    {
        if (temp->data == nextnode->data)
        {
            temp->next = nextnode->next;
            nextnode = temp->next;
        }
        else
        {
            temp = temp->next;
            nextnode = nextnode->next;
        }
    }

    return head;
}

node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
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
    head = deleteduplicates(head);
    print(head);
    return 0;
}