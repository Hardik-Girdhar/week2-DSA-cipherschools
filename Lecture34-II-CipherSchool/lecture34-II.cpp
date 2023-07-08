#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node * left;
    Node * right;
    // Node * next3;

    Node (int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildTree(Node * root)
{
    int var;

    cout<<"enter the value : ";
    cin>>var;


    if(var==-1) return;

    root = new Node(var);

    cout<<"Now enter the data which you want to be the left of "<<var<<" ";
    buildTree(root->left);
    cout<<"Now enter the data which you want to be the right of "<<var<<" ";
    buildTree(root->right);


}

int main()
{
    // string CEO;

    // string PA,CFO;

    Node * root;

    buildTree(root);

    return 0;
}