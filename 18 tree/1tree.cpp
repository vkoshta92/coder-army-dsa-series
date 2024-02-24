#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int main()
{
int x;
cout<<"Enter root element";
cin>>x;
int first,second;
queue<Node*>q;
Node *root= new Node(x);

q.push(root);

// build binary tree
while(!q.empty()){
    Node *temp= q.front();
    q.pop();
    // for left
    cout<<"enter left node";
    cin>>first;
    if(first!=-1){
        temp->left=new Node(first);
        q.push(temp->left);
    }

// for right
cout<<"enter right node";
cin>>second;
if(second!=-1){
temp->right=new Node(second);
q.push(temp->right);
}
}
}