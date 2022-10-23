#include <iostream>
using namespace std;
 
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
int getDiameter(Node* root, int &diameter)
{
    if (root == nullptr) {
        return 0;
    }
 
    int left_height = getDiameter(root->left, diameter);
    int right_height = getDiameter(root->right, diameter);
 
    int max_diameter = left_height + right_height + 1;
 
    diameter = max(diameter, max_diameter);
 
    return max(left_height, right_height) + 1;
}
 
int getDiameter(Node* root)
{
    int diameter = 0;
    getDiameter(root, diameter);
 
    return diameter;
}
 
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    cout << "The diameter of the tree is " << getDiameter(root);
 
    return 0;
}
